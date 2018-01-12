//运行超时
#include <stdio.h>
int main()
{
    int N,i,max = 0,m = 0;
    int A[100000] = {0};
    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%d",&A[i]);
    }
    do{
        for(i = 0;i < N;i++){
            if(A[i] == max){
                A[i] = 0;
                m++;
            }
        }
        max = 0;
        for(i = 0;i < N;i++){
            if(A[i] > max){
                max = A[i];
            }
        }
    }while(m != max);
    printf("%d",max);
}