//部分正确
#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,m=0,n=0;
    char A[100001] = {'\0'},B[100001] = {'\0'};
    scanf("%s %s",A,B);
    j = strlen(A);
    for(i = 0;i < strlen(A);i++){//A设为不可打印的数组
        if(A[i] >= 'A' && A[i] <= 'Z'){//变为小写
            A[i] += 32;
            n++;
        }
        if(A[i] == '+')
            m = 1;
    }
    if(m == 1){//大写都不能
        for(m = 0;m < 26;m++){
            A[j + m] = 65 + m;
        }
    } 
    else{
        for(m = 0;m < n;m++){
            for(i = 0;i < strlen(A);i++){
                if(A[i] >= 'a' && A[i] <= 'z')
                    A[j + m] = A[i] - 32;
            }
        }
    }
    for(i = 0;i < strlen(B);i++){
        m = 0;
        for(j = 0;j < strlen(A);j++){
            if(B[i] == A[j])
                m++;
        }
        if(m == 0){
            printf("%c",B[i]);
        }
        if(B[i+1] == '\0'){
            printf("\n");
        }
    }
    return 0;
}