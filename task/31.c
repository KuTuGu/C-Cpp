//运行正确
#include<stdio.h>
int main()
{
    int T,i,A,B;//10^9在int范围内
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d%d",&A,&B);
    if(A%B==0)
        printf("YES\n");
    else
        printf("NO\n");
    }
    return 0;
}
