//运行正确
#include<stdio.h>
int main()
{
    int M,N,i,j,A,B,C,d,e=0;
    scanf("%d%d%d%d%d",&M,&N,&A,&B,&C);
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            scanf("%d",&d);
            if(d>=A&&d<=B){
                d=C;
            }
            e++;
            if(e%N==0&&i<M-1)
                printf("%03d\n",d);
            else if(j<N-1)
                printf("%03d ",d);
            else
                printf("%03d",d);
        }
    }
    return 0;
}
