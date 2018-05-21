#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int N;
    char pw[82] = {'\0'};
    cin >> N;
    getchar();
    for(int i = 0;i < N;i++){
        //保证每次读取掉换行符
        fgets(pw, 82, stdin);
        int len = strlen(pw),
            word = 0,
            num = 0,
            dot = 0;
        //去掉换行符，注意减1
        pw[len] = '\0';
        len--;
        if(len < 6){
            cout << "Your password is tai duan le.\n";
            continue;
        }
        for(int j = 0;j < len;j++){
            if(pw[j] >= '0' && pw[j] <= '9')
                num++;
            else if((pw[j] >= 'a' && pw[j] <= 'z') || (pw[j] >= 'A' && pw[j] <= 'Z'))
                word++;
            else if(pw[j] == '.')
                dot++;
            else{
                cout << "Your password is tai luan le.\n";
                break;
            }
        }
        if(num + word + dot != len)
            continue;
        else if(num == 0)
            cout << "Your password needs shu zi.\n";
        else if(word == 0)
            cout << "Your password needs zi mu.\n";
        else
            cout << "Your password is wan mei.\n";
    }
    return 0;
}