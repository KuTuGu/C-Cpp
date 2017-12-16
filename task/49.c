//运行正确
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int i,j;
    int C[80]={0};
    char A[81]={'\0'},B[81]={'\0'};
    scanf("%s",A);
    scanf("%s",B);
    for(i=0;i<strlen(A);i++){
        for(j=0;j<strlen(B);j++){
            if(toupper(A[i])==toupper(B[j]))
                C[i]++;
        }
        if(C[i]==0&&A[i]!='@'){
            for(j=i+1;j<strlen(A);j++){//不能从0开始，否则A[i]也会变为@
                if(toupper(A[j])==toupper(A[i]))
                    A[j]='@';
            }
            printf("%c",toupper(A[i])); 
            A[i]='@';//应使其最后变为‘@’       
        }
    }
    return 0;
}
