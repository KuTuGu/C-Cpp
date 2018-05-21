#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int d, N;
    char res[1000000] = {'\0'},
         copy[1000000] = {'\0'};
    cin >> d >> N;
    if(N == 1){
        cout << d << endl;
        return 0;
    }
    res[0] = d + '0';
    res[1] = '1';

    for(int i = 2;i < N;i++){
        int len = strlen(res),
            co = 0;
        for(int j = 1;j < len;j++){
            int num = 0;
            while(res[j] == res[j - 1] && j < len){
                num++;
                j++;
            }
            copy[co++] = res[j - num - 1];
            copy[co++] = num + 1 + '0';
        }
        if(res[len - 2] != res[len - 1]){
            copy[co++] = res[len - 1];
            copy[co++] = '1';
        }
        strcpy(res, copy);
    }
    cout << res << endl;
    return 0;
}