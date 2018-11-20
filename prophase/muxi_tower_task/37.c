//运行正确
#include<stdio.h>
int main()
{
    int N,i,j,B,M;
    int C[1000][2];
    char A[1000][15];//建立数组准考证号
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%s%d%d",&A[i],&C[i][0],&C[i][1]);//注意%s和数组间的关系
    }
    scanf("%d",&M);
    for(i=0;i<M;i++){//循环一次输出一次
        scanf("%d",&B);//储存机试号
        for(j=0;j<N;j++){
            if(B==C[j][0])
                printf("%s %d\n",A[j],C[j][1]);
        }
    }
    return 0;
}
