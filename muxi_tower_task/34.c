//运行正确
#include<stdio.h>
int main()
{
    int N,i,j,a=0,b=0;
    int A[4];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        for(j=0;j<4;j++)
            scanf("%d",&A[j]);
        if(A[0]+A[2]==A[1]&&A[1]!=A[3])
            b++;
        if(A[0]+A[2]==A[3]&&A[1]!=A[3])
            a++;
    }
    printf("%d %d",a,b);
    return 0;
}
