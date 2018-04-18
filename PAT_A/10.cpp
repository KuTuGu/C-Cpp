/*
测试点0: 字符串一位时(两个字符串相等即可)多解，如6 6 1 10,解最小为6，当一位时不能用二分法
radix 不一定最大36
可能会溢出，要检测是否为负值
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

long long change(string str, long long radix);
long long search(string str, long long value);
int main()
{
    string N1, N2;
    int tag;
    long long n, result, radix;

    cin >> N1 >> N2 >> tag >> radix;

    n = tag == 1 ? change(N1, radix) : change(N2, radix);

    if(tag == 1){
        //如果长度为1，不用二分法
        if(N2.length() == 1){
            int a = isdigit(N2[0]) ? N2[0] - '0' : N2[0] - 'a' + 10; 
            if(n == change(N2, a + 1))
                cout << a + 1 << endl;
        }
        else if((result = search(N2, n)))
            cout << result << endl;
        else
            cout << "Impossible\n";
    }
    else{
        if(N1.length() == 1){
            int a = isdigit(N1[0]) ? N1[0] - '0' : N1[0] - 'a' + 10; 
            if(n == change(N1, a + 1))
                cout << a + 1 << endl;
        }
        else if((result = search(N1, n)))
            cout << result << endl;
        else
            cout << "Impossible\n";
    }
    return 0;
}
long long change(string str, long long radix){
    int len = str.length();
    long long sum = 0;
    for(int i = 0;i < len;i++)
        sum += (isdigit(str[i]) ? str[i] - '0' : str[i] - 'a' + 10) * pow(radix, len - i - 1);
    return sum;
}
long long search(string str, long long value){
    int len = str.length(), start = 0;
    long long result;
    for(int i = 0;i < len;i++){
        if(str[i] > start){
            start = str[i];
        }
    }
    //二分法
    long long low = (start >= 97) ? (start - 87) : (start - 48) + 1;
    long long high = value; 
    while(low <= high){
        long long mid = (low + high) / 2;
        long long num = change(str, mid);
        //小于0是因为可能会溢出
        if(num > value || num < 0)
            high = mid - 1;
        else if(num < value) 
            low = mid + 1;
        else
            return mid;
    }
    return 0;
}