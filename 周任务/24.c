//时间超出
#include <stdio.h>
int main()
{
    int sum=0,i;
    int A[3];
    char *B[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    char a;
    while((a=getchar())!='\n'){
        sum+=a-48;
    }
    if(sum / 100)                          
        printf("%s",B[sum/100]);
    if(sum/10%10)
        printf("%s",B[sum/10%10]);
    printf("%s",B[sum%10]);         
    return 0;
}
