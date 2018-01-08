//运行超时
#include <stdio.h>
float plus(int n,float *a,int m);
int main()
{
    int N,i,j;
    float sum = 0.0;
    float A[100000] = {0.0}; 
    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%f",&A[i]);
    }
    for(i = 0;i < N;i++){
        for(j = i;j < N;j++){
            sum += plus(j + 1,A,i);
        }
    }
    printf("%.2f",sum);
    return 0;
}
float plus(int n,float *a,int m){
    float sum = 0.0;
    while((n--) > m){
        sum += a[n];
    }
    return sum;
}