//部分正确
#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,m = 0,n = 0,a;
    char p[4][61];
    for(i = 0;i < 4;i++){
        scanf("%s",p[i]);
    }
    for(j = 0;j < strlen(p[0]) && j < strlen(p[1]);j++){
        if(m == 0 && p[0][j] == p[1][j] && p[0][j] >= 'A' && p[0][j] <= 'G'){//星期
            switch(p[0][j]){
                case 'A':printf("MON ");break;
                case 'B':printf("TUE ");break;
                case 'C':printf("WED ");break;
                case 'D':printf("THU ");break;
                case 'E':printf("FRI ");break;
                case 'F':printf("SAT ");break;
                case 'G':printf("SUN ");break;    
            }
            m++;
        }
        if(m == 2 && p[0][j] == p[1][j] && ((p[0][j] >= 'A' && p[0][j] <= 'N') || (p[0][j] >= '0' && p[0][j] <= '9'))){
            if(p[0][j] >= 'A' && p[0][j] <= 'N'){
                a = p[0][j] - 'A' + 10;
                m++;
            }
            else{
                a = p[0][j] - '0';
                m++;
            }
        }
        if(m == 1)
            m++;//跳过第一个相同的点
        if(m == 3)
            break;
    }
    for(j = 0;j < strlen(p[2]) && j < strlen(p[3]);j++){
        if(p[2][j] == p[3][j] && ((p[2][j] >= 'a' && p[2][j] <= 'z') || (p[2][j] >= 'A' && p[2][j] <= 'Z'))){
            n = j;
            break;
        }
    }
    printf("%02d:%02d",a,n);
    return 0;
}
