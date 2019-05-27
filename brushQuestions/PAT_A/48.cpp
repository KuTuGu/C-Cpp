#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> coins(N, 0);
    for(int i = 0;i < N;i++){
        cin >> coins[i];
    }
    sort(coins.begin(), coins.end());
    for(int i = 0;i < N;i++){
        if(coins[i] > M / 2){
            cout << "No Solution\n";
            return 0;
        }
        
        else if(binary_search(coins.begin() + i + 1, coins.end(), M - coins[i])){
            cout << coins[i] << " " << M - coins[i] << endl;
            return 0;
        }
    }
    return 0;
}