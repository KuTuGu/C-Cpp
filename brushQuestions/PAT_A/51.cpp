#include <iostream>
#include <vector>
using namespace std;

int main(){
    size_t M, N, K;
    cin >> M >> N >> K;
    for(size_t i = 0;i < K;i++){
        size_t popData, topData = 2, flag = 0;
        vector<size_t> stack(1, 1);
        for(size_t j = 0;j < N;j++){
            cin >> popData;
            if((popData != stack.back()) && (popData != topData)){
                // cout << "top: " << topData << " popData: " << popData << endl;
                for(size_t m = topData;m <= popData;m++){
                    stack.push_back(m);
                }
                // cout << "size: " << stack.size() << endl;
                if((stack.size() > M) || (topData > popData)){
                    flag = 1;
                }
                else{
                    stack.pop_back();   
                    topData = popData + 1;
                }
            }
            else if(popData == stack.back()){
                stack.pop_back();
            }
            else if(popData == topData){
                topData++;
            }
            else{
                flag = 1;
            }
        }
        if(flag){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}
