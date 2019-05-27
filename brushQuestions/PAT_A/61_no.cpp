/*
PAT乙级1014
测试点1、2错误。。。
*/
#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
    string HourStr[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    string dayStr1, dayStr2, minuteStr1, minuteStr2;
    cin >> dayStr1 >> dayStr2 >> minuteStr1 >> minuteStr2;
    int len1 = dayStr1.length() > dayStr2.length() ? dayStr2.length() : dayStr1.length(),
        len2 = minuteStr1.length() > minuteStr2.length() ? minuteStr2.length() : minuteStr1.length();
    int dayChar = 0, hourChar = 0, minuteChar = 0;
    while(dayChar < len1 && !((dayStr1[dayChar] == dayStr2[dayChar]) && (dayStr1[dayChar] >= 'A' && dayStr1[dayChar] <= 'G'))){
        dayChar++;
    }
    hourChar = dayChar + 1;
    while(hourChar < len1 && !((dayStr1[hourChar] == dayStr2[hourChar]) && ((dayStr1[hourChar] >= 'A' && dayStr1[dayChar] <= 'N') || (dayStr1[hourChar] >= '0' && dayStr1[hourChar] <= '9')))){
        hourChar++;
    }
    while(minuteChar < len2 && !((minuteStr1[minuteChar] == minuteStr2[minuteChar]) && isalpha(minuteStr1[minuteChar]))){
        minuteChar++;
    }
    cout << HourStr[dayStr1[dayChar] - 'A'] << " " << setfill('0') << setw(2) << ((dayStr1[hourChar] >= '0' && dayStr1[hourChar] <= '9') ? (dayStr1[hourChar] - '0') : ((int)(dayStr1[hourChar] - 'A' + 10))) << ":" << setfill('0') << setw(2) << minuteChar << endl;

    return 0;
}