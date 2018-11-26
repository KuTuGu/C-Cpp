#include <stdio.h>
#include <string.h>
int atoi(char *A);
int main()
{
    char A[1000]={'\0'},B[1000]={'\0'};
    int a,b;
    printf("请输入两个英文或数字字符串，判断相等：");
    scanf("%s %s",A,B);
    a=atoi(A);
    b=atoi(B);
    if(!(a^b))
        printf("两者相等");
    else
        printf("想什么呢，怎么可能相等");
    return 0;    
}
int atoi(char *A){
    int a=0,i;
    for(i=0;i<strlen(A);i++){
        a*=10;
        if(A[i]>='0'&&A[i]<='9')
            a+=A[i]-'0';
        else if(A[i]>='a'&&A[i]<='z')
            a+=A[i]-'a';
        else if(A[i]>='A'&&A[i]<='Z')
            a+=A[i]-'A';
    }
    return a;
}
