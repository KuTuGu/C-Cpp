/*
测试数据：https://siukwan.sinaapp.com/?p=380
测试点6见注释
*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void dealString(string& str, int N);
int main(){
    int N;
    string float1, float2;
    cin >> N >> float1 >> float2;

    dealString(float1, N);
    dealString(float2, N);
    
    if(float1 == float2){
        cout << "YES " + float1 << endl;
    }
    else{
        cout << "NO " + float1 << " " << float2 << endl;
    }

    return 0;
}

void dealString(string& str, int N){
    int len = str.length();
    size_t pos = 0;

    while(pos < len && (str[pos] == '0' && str[pos + 1] != '.')){
        pos++;
    }
    str = str.substr(pos);
    pos = str.find(".");

    if(pos != str.npos){
        if(pos == 1 && str[0] == '0'){
            str.erase(pos, 1);
            pos = 0;
            len = str.length();
            while(pos < len && (str[pos] == '0' && str[pos + 1] != '.')){
                pos++;
            }
            //测试点 6   0的检测   test data：4 0.00 0
            if(pos == len){
                pos = 1;
            }
            str = str.substr(pos, N);
            for(size_t i = str.length();i < N;i++){
                str += "0";
            }
            str = "0." + str + "*10^" + to_string((int)(1 - pos));
        }
        else{
            str.erase(pos, 1);
            str = str.substr(0, N);
            for(size_t i = str.length();i < N;i++){
                str += "0";
            }
            str = "0." + str + "*10^" + to_string(pos);
        }
    }
    else{
        len = str.length();
        str = str.substr(0, N);
        for(size_t i = str.length();i < N;i++){
            str += "0";
        }
        str = "0." + str + "*10^" + to_string(len);
    }

    return;
}
