//运行正确
#include <stdio.h>
int main()
{
    int a,N,D,i,j,m,n,emp = 0,may_emp = 0;
    int A[1000] = {0};
    float e;
    float b;
    scanf("%d%f%d",&N,&e,&D);
    for(i = 1;i <= N;i++){
        m = 0,n = 0;
        scanf("%d",&a);
        for(j = 0;j < a;j++){
            scanf("%f",&b);
            if(b < e)
                m++;
        }
        if(m > a / 2 && a > D){
            emp++;
        }
        else if(m > a / 2){
            may_emp++;
        }
    }
    printf("%.1f%% %.1f%%",may_emp / (float)N * 100,emp / (float)N * 100);
    return 0;
}