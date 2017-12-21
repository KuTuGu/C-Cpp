//二，三测试点
#include <stdio.h>
int main()
{
    int N,i,j,D;
    float sum=0.0,max=0.0;
    int A[1000]={0},B[1000]={0};
    float C[1000]={0.0};
    scanf("%d%d",&N,&D);
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<N;i++){
        scanf("%d",&B[i]);
    }
    for(i=0;i<N;i++){
        C[i]=B[i]/(float)A[i];
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