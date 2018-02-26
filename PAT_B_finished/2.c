//运行正确
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,sum=0,a,b,c;
    char A[101]={'\0'},*B[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    scanf("%s\n",A);
    for(i=0;i<strlen(A);i++){
        sum+=A[i]-'0';
    }
    a=sum/100;
    b=sum/10%10;
    c=sum%10;
    if(a!=0)
        printf("%s %s %s",B[a],B[b],B[c]);
    else if(b!=0)
        printf("%s %s",B[b],B[c]);
    else 
        printf("%s",B[c]);
    return 0;
}