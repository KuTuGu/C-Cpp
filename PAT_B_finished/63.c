//运行正确
#include <stdio.h>
#include <math.h>
int main()
{
    int N,i,j=0;
    int A[20000];
    double max=0.0,b;
    scanf("%d",&N);
    for(i=0;i<N;i++,j++){//循环5次，但要保存10个值
        scanf("%d%d",&A[2*j],&A[2*j+1]);//注意乘以2
        //printf("%d %d\n",A[2*j],A[2*j+1]);
    }
    for(i=0,j=0;i<N;i++,j++){
        b=sqrt((double)pow(A[2*j],2)+(double)pow(A[2*j+1],2));
        if(b>max){
            max=b;
        }
    }
    printf("%.2f",max);
    return 0;  
}
