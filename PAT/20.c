//第三测试点
#include <stdio.h>
int main()
{
    int N,i,j,D;
    float sum=0.0,max=0.0;
    float A[1000]={0.0},B[1000]={0.0},C[1000]={0.0};
    scanf("%d%d",&N,&D);
    for(i=0;i<N;i++){
        scanf("%f",&A[i]);
    }
    for(i=0;i<N;i++){
        scanf("%f",&B[i]);
    }
    for(i=0;i<N;i++){
        C[i]=B[i]/A[i];
    }
    while(D){
        for(i=0;i<N;i++){
            if(C[i]>max){
                max=C[i];//注意C[j]是小数,max也应为小数
                j=i;
            }
        }
        if(A[j]>=D){
            sum+=D*C[j];
            printf("%.2f",sum);
            D=0;
        }
        else{
            D-=A[j];
            sum+=B[j];
            C[j]=0;
            max=0.0;
        }
    }
    return 0;
}