//归并算法看错了，查一下
#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int i,int j); 
void Merge(int *a,int n,int *b,int *c);
int compare(int *a,int *b,int k,int *m);
void store(int *a,int k);
void print(int *a,int k);
int main(){
    int N,i,j,m=0,n=0;
    int *A,*B,*C;
    scanf("%d",&N);
    A = malloc(sizeof(int) * N);
    B = malloc(sizeof(int) * N);
    C = malloc(sizeof(int) * N);
    //储存数值
    store(A,N);
    store(B,N);
    for(i = 0;i < N;i++){
        C[i] = A[i];
    }
    printf("%d\n",compare(A,B,N,&m));
    //进行递归算法的循环判断是否为该算法
    while(compare(A,B,N,&m)){
        Merge(C,N,&n,A);
            print(A,N);
            printf("...\n");
    }
    printf("%d...\n",m);
    if(m){//是插入算法
        printf("Insertion Sort\n");
        Merge(C,N,&n,B);
        print(B,N);
    }
    else{//递归算法
        printf("Merge Sort\n");

        print(B,N);
    }
    return 0;
}
int compare(int *a,int *b,int k,int *m){
    int i = 0,j = 0,n = 0;
    for(i = 0;i < k;i++){
        if(a[i] != b[i])
            j++;
    }
    //判断是否已经排好
    for(i = 0;i < k;i++){
        if(a[i] > a[i+1])
            n++;
    }
    //不相等且没有排好继续循环
    if(j != 0 && n != 0){
        return 1;
    }
    //相等且没有排好退出循环
    else if(j == 0 && n != 0){ 
        *m = 1;//m判断是排到最后还是遇到相等
        return 0;
    } 
    //已经排好，退出循环
    else{
        return 0;
    }
}
void store(int *a,int k){
    int i;
    for(i = 0;i < k;i++){
        scanf("%d",&a[i]);
    }
}
//插入算法
void Merge(int *a,int n,int *b,int *c){
    int j,temp,i;
    for(j = 0;j < n;j++){
        if(a[*b] > a[j]){
            i = j;
            break;
        }
    }
    //下面有错误，应判断i与*b的位置关系
    for(j = *b;j < i - 1;j++){
        c[j] = a[j+1];
    }
    c[i - 1] = a[*b];
    *b = i;
}
void swap(int *a,int i,int j){
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp; 
}
void print(int *a,int k){
    int i;
    for(i = 0;i < k-1;i++){
        printf("%d ",a[i]);
    }
    printf("%d",a[i]);
}
