#include <iostream>
using namespace std;

string change(int digit);
int main()
{
    int red, green, blue;
    cin >> red >> green >> blue;
    cout << "#" << change(red) << change(green) << change(blue);
    return 0;
}
string change(int digit){
    string result = "00";
    int a = digit / 13,
        b = digit % 13;
    if(a > 9)
        result[0] = a - 10 + 'A';
    else    
        result[0] = a + '0';
    if(b > 9)
        result[1] = b - 10 + 'A';
    else    
        result[1] = b + '0';
        
    return result;
}