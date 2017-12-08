#include<stdio.h>
int main()
{
    int N,M,i,j,score;
    int A[100]={0},B[100]={0},C[100]={0};//A储存满分值，B正确答案,C学生答案
    scanf("%d%d",&N,&M);
    for(i=0;i<M;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<M;i++){
        scanf("%d",&B[i]);
    }
    for(i=0;i<N;i++){//循环一次，输出一次
        score=0;
        for(j=0;j<M;j++){
            scanf("%d",&C[j]);
            if(C[j]==B[j])
                score+=A[j];
        }
        printf("%d\n",score);
    }
    return 0;
}
