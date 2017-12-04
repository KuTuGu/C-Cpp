//部分正确（输出正确）
#include<stdio.h>
int main()
{
    int t,n,i,j;
    float max=0.0;
    float A[10]={0.0};
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%f",&A[j]);
            if(A[j]>max)
                max=A[j];
        }
        printf("%.2f\n",max);
    }
    return 0;
}
