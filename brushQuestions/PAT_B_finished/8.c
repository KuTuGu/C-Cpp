//运行正确
#include <stdio.h>
int main()
{
    int N,M,i;
    int A[100]={0};
    scanf("%d%d",&N,&M);
    M=M%N;//避免M>N;
    for(i=0;i<N;i++){
         if(i<N-M)
            scanf("%d",&A[i+M]);
        else
            scanf("%d",&A[i-N+M]);
    }
    for(i=0;i<N;i++){
        if(i!=N-1)
            printf("%d ",A[i]);
        else
            printf("%d",A[i]);
    }
    return 0;
}
