#include <stdio.h>
#include <math.h>
int main()
{
    int M,N,i=0,A[10000]={0},a,j,b=1,c=0,d=0;
    scanf("%d %d",&M,&N);
    for(a=2;A[9999]==0;a++){
        for(j=1;j<=sqrt(a);j++){
            if(a%j==0&&j!=1){
                b++;
                break;
            }
        }
        if(b==0){
            A[c]=a;
            c++;
        }
    }
    for(M=M;M<=N;M++){
        d++;
        if(d%10!=0)
            printf("%d ",A[M]);
        else if(d%10==0)
            printf("%d\n",A[M]);
    } 
    return 0;
}
