/*
method1：loop once http://www.cnblogs.com/chenxiwenruo/p/6677802.html
method2：binary search https://www.liuchuo.net/archives/2939
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> sum, result;
int N, M;

void Func(int i, int &j, int &tempsum);

int main()
{
    cin >> N >> M;
    sum.resize(N + 1);
    for(int i = 1;i <= N;i++){
        cin >> sum[i];
        sum[i] += sum[i - 1];
    }
    int minans = sum[N];
    for(int i = 1;i <= N;i++){
        int j, tempsum;
        Func(i, j, tempsum);
        if(tempsum > minans){
            continue;
        } 
        if(tempsum >= M){
            if(tempsum < minans){
                result.clear();
                minans = tempsum;
            }
            result.push_back(i);
            result.push_back(j);
        }
    }
    for(int i = 0;i < result.size();i += 2){
        cout << result[i] << "-" << result[i + 1] << endl;
    }
    
    return 0;
}

void Func(int i, int &j, int &tempsum){
    int left = i, right = N;
    while(left < right) {
        int mid = (left + right) / 2;
        if(sum[mid] - sum[i - 1] >= M)
            right = mid;
        else
            left = mid + 1;
    }
    j = right;
    tempsum = sum[j] - sum[i - 1];
}