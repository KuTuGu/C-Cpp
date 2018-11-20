//运行正确
#include <stdio.h>
int main()
{
    int i,m;
    int B[10] = {0};
    char A[1000] = {'\0'};
    scanf("%s",A);
    for(i = 0;A[i] != '\0';i++){
        switch(A[i]){
            case '0':   B[0]++;
            break;
            case '1':   B[1]++;
            break;
            case '2':   B[2]++;
            break;
            case '3':   B[3]++;
            break;
            case '4':   B[4]++;
            break;
            case '5':   B[5]++;
            break;
            case '6':   B[6]++;
            break;
            case '7':   B[7]++;
            break;
            case '8':   B[8]++;
            break;
            case '9':   B[9]++;
            break;
        }
        
    }
    for(m = 0;m < 10;m++){
        if(B[m] != 0){
            printf("%d:%d\n",m,B[m]);
        }
    }
    return 0;     
}