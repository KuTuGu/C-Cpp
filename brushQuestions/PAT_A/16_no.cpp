#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <map>
#include <cmath>
#include <set>
using namespace std;

bool compare1(int a, int b);
bool compare2(string a, string b);
int main()
{
    vector<int> change(24);
    int month, N, total = 0;
    
    for(int i = 0;i < 24;i++){
        scanf("%d", &change[i]);
        total += change[i] * 60;
    } 
    scanf("%d", &N);
    map<string, vector<int> > bill;
    vector<string> client;
    for(int i = 0;i < N;i++){
        string name, isOn;
        int sum = 0;
        cin >> name;
        if(!count(client.begin(), client.end(), name))
            client.push_back(name); 
        //以00:00:00为参照
        for(int j = 0;j < 4;j++){
            int tim;
            if(!j)
                scanf("%d", &tim);
            else
                scanf(":%d", &tim);
            if(!j)
                month = tim;
            else if(j == 1)
                sum += tim * 24 * 60;
            else
                sum += tim * pow(60, 3 - j);
        }
        cin >> isOn;
        if(isOn == "off-line")
            sum *= -1;
        bill[name].push_back(sum);
    }

    map<string, vector<int> >::iterator iter;
    for(iter = bill.begin();iter != bill.end();iter++){
        vector<int> cost = iter->second;
        sort(cost.begin(), cost.end(), compare1);
        iter->second = cost;
    }

    sort(client.begin(), client.end(), compare2);
    for(int i = 0;i < client.size();i++){
        cout << client[i] << " " << setw(2) << setfill('0') << month << endl;
        int sum = 0;
        for(int j = 0;j < bill[client[i]].size();j++){
            if(bill[client[i]][j] > 0){
                int start = bill[client[i]][j]; 
                if(bill[client[i]][++j] > 0)
                    j--;
                else{
                    int end = -bill[client[i]][j];
                    int startDay = start / (24 * 60);
                    int endDay = end / (24 * 60);
                    int startHour = (start - startDay * (24 * 60)) / 60;
                    int startMin = start % 60;
                    int endHour = (end - endDay * (24 * 60)) / 60;
                    int endMin = end % 60;
                    int num;
                    if(endHour >= startHour){
                        num = (60 - startMin) * change[startHour] + endMin * change[endHour];
                        for(int z = startHour + 1; z < endHour;z++)
                            num += change[z] * 60;
                        num += (endDay - startDay) * total;
                    }
                    else{
                        num = (60 - endMin) * change[endHour] + startMin * change[startHour];
                        for(int z = endHour + 1; z < startHour;z++)
                            num += change[z] * 60;
                        num = (endDay - startDay) * total - num;
                    }

                    sum += num;
                    printf("%02d:%02d:%02d ", startDay, startHour, startMin);
                    printf("%02d:%02d:%02d ", endDay, endHour, endMin);
                    printf("%d $%.2f\n", end - start, num / 100.0);
                }

            }
        }
        printf("Total amount: $%.2f\n", sum / 100.0);
    }
    return 0;
}
bool compare1(int a, int b){
    return abs(a) < abs(b);
}
bool compare2(string a, string b){
    return a < b;
}