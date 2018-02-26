#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int i,int j);
void qswap(int *a,int b,int c);
int main(){
    int i,A;
    int *a;
    puts("请输入要交换的数字个数：");
    scanf("%d",&A);
    a=malloc(sizeof(int)*A);
    for(i=0;i<A;i++){
        scanf("%d",&a[i]);
    }
    qswap(a,0,A-1);
    for(i=0;i<A;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
void swap(int *a,int i,int j){
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j]=temp;
}
void qswap(int *a,int b,int c){
    int i,last;
    if(b>c)
        return;
    last = b;
    for(i = b+1;i <= c;i++){
        if(a[i]<a[last])
            swap(a,++last,i);
    }
    swap(a,b,last);
    qswap(a,b,last-1);
    qswap(a,last+1,c);
}

