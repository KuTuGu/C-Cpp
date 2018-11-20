#include <iostream>
#include <vector>
#define LEN 55
using namespace std;

int main() {
    int K;
    int order[LEN] = {0};
    string init[LEN], kinds[4] = {"S", "H", "C", "D"}, *p = init;
    cin >> K;

    for(int i = 0;i < 4;i++){
        for(int j = 1;j <= LEN / 4;j++){
            init[i * (LEN / 4) + j] = kinds[i] + to_string(j); 
        }
    }
    init[53] = "J1";
    init[54] = "J2";

    for(int i = 1;i < LEN;i++){
        cin >> order[i];
    }

    for(int i = 0;i < K;i++){
        string *temp = new string[LEN];
        for(int j = 1;j < LEN;j++){
            temp[order[j]] = *(p + j);
        }
        p = temp;
    }

    for(int i = 1;i < LEN;i++){
        if(i != LEN - 1){
            cout << *(p + i) << " ";
        }
        else{
            cout << *(p + i) << endl;
        }
    }

    return 0;
}