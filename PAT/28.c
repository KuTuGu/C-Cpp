#include <stdio.h>
#include <stdlib.h>
void min_max(int *a,int *c,int d);
int count(int min,int max,int *c,int d);
int main(){
    int N,p,i,j,min = 1000000000,max = 0,sum = 0;
    int *A,B[2] = {0}; 
    scanf("%d%d",&N,&p);
    A=malloc(N * sizeof(int));
    for(i = 0;i < N;i++){
        scanf("%d",&A[i]);
    }
    min_max(B,A,N);
    min = A[min],A[min] = 0;
    max = A[max],A[max] = 0;
    while(min >= max){
        min_max(B,A,N);
        min = A[B[0]],A[B[0]] = 0;
        max = A[B[1]],A[B[1]] = 0;
        if(max > min * p)
            continue;
        if(count(min,max,A,N)>sum)
            sum = count(min,max,A,N);
    }
    printf("%d",sum);
    return 0;
}
void min_max(int *a,int *c,int d){
    int i,min = 1000000000,max = 0;
    for(i = 0;i < d;i++){
        if(c[i] < min && c[i] != 0){
            min = c[i];
            a[0] = i;
        }
        if(c[i] > max){
            max = c[i];
            a[1] = i;
        }
    }
}
int count(int min,int max,int *c,int d){
    int i,j = 0;
    for(i = 0;i < d;i++){
        if(c[i] >= min && c[i] <= max && c[i]!= 0){
            j++;
        }
    }
    return j;
}