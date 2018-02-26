//运行正确
#include <stdio.h>
int main()
{
    int N,i,j = 0,min,a,min_i;
    scanf("%d",&N);
    int A[10000] = {0},B[10000] = {0};
    for(i = 0;i < N;i++){
        scanf("%d",&A[i]);
    }
    a = N;
    do{
        min = 10001;
        for(i = 0;i < N;i++){
            if(A[i] < min){
                min = A[i];
                min_i = i;
            }
        }
        B[j] = A[min_i];
        j++;
        A[min_i] = 10001;
        a--;
    }while(a);
    for(i = 1;i < N;i++){
        B[i] = (B[i - 1] + B[i]) / 2;
    }
    printf("%d",B[N - 1]);
    return 0;
}