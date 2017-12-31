//运行超时
#include <stdio.h>
#include <stdlib.h>
void read_fetch(int **a,int b);//储存在数组中
int main()
{
    int i,j,sum,N,M;
    int *A,*B;
    //读分数
    scanf("%d",&M);
    read_fetch(&A,M);
    //取分数
    scanf("%d",&N);
    read_fetch(&B,N);
    //查找分数
    for(j = 0;j < N;j++){
        sum = 0;
        for(i = 0;i < M;i++){
            if(A[i] == B[j]){
                sum++;
            }
        }
        if(j != N - 1)
            printf("%d ",sum);
        else
            printf("%d",sum);
    }
    free(A);
    free(B);
    return 0;
}
void read_fetch(int **a,int b){
    int i;
    *a = malloc(sizeof(int) * b);
    for(i = 0;i < b;i++){
        scanf("%d",&(*a)[i]);
    }
}
