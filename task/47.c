//最后一个测试点
#include<stdio.h>
int main()
{
    int N,i,max=0,j,I;
    int A[100000][2]={0},B[100000][2]={0};
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d%d",&A[i][0],&A[i][1]);
        B[i][0]=i+1;
    }
    for(i=0;i<N;i++){
        for(I=0;I<N;I++){
            if(A[i][0]==B[I][0])
                B[I][1]+=A[i][1];
            if(B[I][1]>max){
                max=B[I][1];
                j=I;
            }
        }
    }
    printf("%d %d",B[j][0],max);
    return 0;
}
