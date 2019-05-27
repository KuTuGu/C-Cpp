#include <iostream>
#include <vector>
using namespace std;

vector<int> digits;
int n, num = 0;
void swap(int a, int b);
int calcuTime(int num);
int main() {
    cin >> n;
    digits.resize(n);
    for(int i = 0;i < n;i++){
        cin >> digits[i];
        if(digits[i] != i){
            num++;
        }
    }
    cout << calcuTime(num) << endl;

    return 0;
}
void swap(int a, int b){
    int temp = digits[a];
    digits[a] = digits[b];
    digits[b] = temp;
}
int calcuTime(int num){
    int step = 0;
    while(num){
        if(digits[0]){
            swap(0, digits[0]);
            step++;
            num--;
            if(!digits[0]){
                num--;
            }
        }
        else{
            int min = n * n;
            step++;
            num++;
            vector<int> originVec(digits.begin(), digits.end());
            for(int i = 1;i < n;i++){
                if(digits[i] != i){
                    swap(0, i);
                    int tempStep = calcuTime(num);
                    if(tempStep < min){
                        min = tempStep;
                    }
                    digits.clear();
                    digits.insert(digits.end(), originVec.begin(), originVec.end());
                }
            }
            step += min;
        }
    }
    return step;
}