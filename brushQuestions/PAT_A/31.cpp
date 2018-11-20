#include <iostream>

using namespace std;

string str;

void outPut(int left, int bottom);

int main()
{
    cin >> str;

    int quotient = (str.length() - 2) / 3;
    int remaind = (str.length() - 2) % 3;

    switch(remaind){
        case 0: outPut(quotient + 1, quotient);     break;
        case 1: outPut(quotient + 1, quotient + 1); break;
        case 2: outPut(quotient + 2, quotient);     break;
    }

    return 0;
}
void outPut(int left, int bottom){
    for(int i = 0;i < left;i++){
        printf("%c", str[i]);

        if(i < left - 1){
            for(int j = 0;j < bottom;j++){
                printf(" ");
            }
            printf("%c\n", str[str.length() - 1 - i]);
        }
        else{
            for(int j = 0;j < bottom;j++){
                printf("%c", str[i + 1 + j]);
            }
            printf("%c\n", str[i + 1 + bottom]);
        }
    }
}