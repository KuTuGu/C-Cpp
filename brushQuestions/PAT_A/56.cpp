#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int np, ng;
    cin >> np >> ng;
    vector<int> weight(np), rank(np, 0), copyOrder(np);
    queue<int> order;
    for(int i = 0;i < np;i++){
        cin >> weight[i];
    }
    for(int i = 0;i < np;i++){
        cin >> copyOrder[i];
        order.push(copyOrder[i]);
    }
    int len;
    while(1){
        len = order.size();
        if(len <= 1){
            rank[copyOrder[0]] = 1;
            break;
        }
        vector<int> tempOrder;
        int i = 0, j = 0;
        while(i < len){
            int max = 0, maxi = 0, copyI = i;
            while(j == copyI / ng){
                if(weight[order.front()] > max){
                    max = weight[order.front()];
                    maxi = copyI;
                }
                copyI++;
                order.pop();
                if(copyI >= len){
                    break;
                }
            }
            order.push(copyOrder[maxi]);
            tempOrder.push_back(copyOrder[maxi]);
            while(i < copyI){
                if(i != maxi){
                    rank[copyOrder[i]] = (len % ng) ? (len / ng + 2) : (len / ng + 1);
                }
                i++;
            }
            j++;
        }
        copyOrder = tempOrder;
    }

    for(int i = 0;i < np - 1;i++){
        cout << rank[i] << " ";
    }
    cout << rank[np - 1] << endl;

    return 0;
}