//运行正确
#include<stdio.h>
int main(){
    int N,i,j,sum=0;
    int A[8]={0};
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(i!=j){
                sum+=(A[i]*10+A[j]);
            }
        }
    }
    printf("%d",sum);
    return 0;
}

