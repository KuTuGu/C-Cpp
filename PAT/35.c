//归并算法看错了，查一下
#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int i,int j); 
void Merge(int *a,int n);
int compare(int *a,int *b,int k,int *m);
void store(int *a,int k);
void print(int *a,int k);
int main(){
    int N,i,j,m=0;
    int *A,*B;
    scanf("%d",&N);
    A = malloc(sizeof(int) * N);
    B = malloc(sizeof(int) * N);
    //储存数值
    store(A,N);
    store(B,N);
    //进行递归算法的循环判断是否为该算法
    while(compare(A,B,N,&m)){
        Merge(A,N);
    }
    if(m == 0){//是插入算法
        printf("Insertion Sort\n");
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
        if(a[j] > a[j+1])
            n++;
    }
    //不相等继续循环
    if(j != 0 && n != 0){
        return 1;
    }
    else if(j == 0 && n != 0){ 
        *m = 1;//m判断是循环到最后还是遇到相等数组
        return 0;
    } 
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
void Merge(int *a,int n){
    int j;
    for(j = 0;j < n;j++){
        if(a[j] > a[j+1])
            swap(a,j+1,j);
    }
}
void swap(int *a,int i,int j){
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp; 
}
void print(int *a,int k){
    int i;
    Merge(a,k);
    for(i = 0;i < k-1;i++){
        printf("%d ",a[i]);
    }
    printf("%d",a[i]);
}
