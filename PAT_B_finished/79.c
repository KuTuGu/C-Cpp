//运行正确
#include <stdio.h>
#include <string.h>
int main()
{
    int i,m,a,b = 0,temp;
    char A[1001] = {'\0'},B[1001] = {'\0'},C[1003] = {'\0'};
    scanf("%s",A);
    while(1){
        m = temp = 0;
        a = strlen(A);
        if(b++ >= 10)
        {
            printf("Not found in 10 iterations.");
            return 0;
        }
        for(i = 0;i < a / 2;i++){
            if(A[i] != A[a - 1 - i]){
                m++;
                break;
            }
        }
        if(!m){
            printf("%s is a palindromic number.\n",A);
            return 0;
        }
        else{
            printf("%s + ",A);
            for(i = a - 1; i >= 0; i--){
                B[i] = A[a - i - 1];
                if(temp == 1){
                    C[i] = A[i] + B[i] - '0' + 1;
                    if(C[i] - '0' >= 10){
                        temp = 1;
                        C[i] -= 10;
                    }
                    else
                        temp = 0;
                }
                else{
                    C[i] = A[i] + B[i] - '0' ;
                    if(C[i] - '0' >= 10){
                        temp = 1;
                        C[i] -= 10;
                    }
                    else
                        temp = 0;
                }  
            }
            strcpy(A,C);
            if(temp){
                for(i = a; i > 0; i--)
                {
                    A[i] = A[i-1];
                }
                A[0] = '1';
                a++;
            }
            printf("%s = %s\n",B,A);
        }
    }
}