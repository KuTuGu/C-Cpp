#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, num, flag = 0;
    int nums[100000] = {0};
    cin >> N;
    vector<int> digits;

    for(int i = 0;i < N;i++){
        cin >> num;
        nums[num]++;
        if(nums[num] < 2){
            digits.push_back(num);
        }
    }

    int len = digits.size();
    for(int i = 0;i < len;i++){
        if(nums[digits[i]] == 1){
            flag = 1;
            cout << digits[i] << endl;
            break;
        }
    }
    if(!flag){
        cout << "None" << endl;
    }
    return 0;
}