//运行正确
#include<stdio.h>
int main()
{
    int N,i,max=0,j,m;
    int A[100000]={0},B[100000]={0};
    scanf("%d",&N);
    for(i=0;i<N;i++){
      	scanf("%d",&m);
        scanf("%d",&A[m]);
        B[m]+=A[m];
    }
    for(i=0;i<=N;i++){ //可能取到N
      	if(B[i]>max){
            max=B[i];
            j=i;
        }
    }
    printf("%d %d",j,max);
    return 0;
}
