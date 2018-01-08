//错误点：二维数组作为形参的传递   int a[b][c]; *(*(a + b) + c) = 6879;正确
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define NUM (int)pow(2^31-1,1/2)
void set(int **a,int b,int c,int *d,int n);
int main()
{
    int N,i,j,m;
    int p,q,col,row;
    int *A,**B;
    scanf("%d",&N);
    A = malloc(sizeof(int) * N);
    for(i = 0;i < N;i++){
        scanf("%d",&A[i]);
    }
    for(i = 1;i <= pow(N,1.0/2);i++){
        if(N % i == 0){
            m = i;//记录最大的列数
        }
    }
    p = N / m;
    q = m;
    //int B[p][q];
    int c = p > q ? (p + 1) / 2 : (q + 1) / 2;
    for (i = 0; i < c; ++i, p -= 2, q -= 2) {
        for (col = i; col < i + q; ++col) 
            set(B,i,col,A,N);
        for (row = i + 1;row < i + p; ++row)
            set(B,row,i + q - 1,A,N);
        if (p == 1 || q == 1) break;
        for (col = i + q - 2;col >= i; --col)
            set(B,i + p - 1,col,A,N);
        for (row = i + p - 2;row > i; --row) 
            set(B,row,i,A,N);
    }
    p = N / m;
    q = m;
    for(i = 0;i < p;i++){
        for(j = 0;j < q - 1;j++){
            printf("%d ",B[i][j]);
        }
        if(j == q - 1)
            printf("%d\n",B[i][j]);
    }
    free(A);
    A = NULL;
    return 0;
}
void set(int **a,int b,int c,int *d,int n){
    int max = 0,i,j;
    for(i = 0;i < n;i++){
        if(d[i] > max){
            max = d[i];
            j = i;
        }
    }
    *(*(a + b) + c) = d[j];
    printf("%d ",*(*(a + b) + c));
    d[j] = 0;
}