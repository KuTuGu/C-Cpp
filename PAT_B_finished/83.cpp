#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    int N, value;
    cin >> N;

    int *differ = new int[N - 1];
    memset(differ, 0, (N - 1) * sizeof(int)); 

    for(int i = 1;i <= N;i++){
        cin >> value;
        differ[abs(value - i)]++;
    }
    while(--N >= 0){
        if(differ[N] > 1){
            cout << N << " " << differ[N] << endl;
        }
    }
    return 0;
}