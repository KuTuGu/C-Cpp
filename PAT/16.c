//运行正确
#include<stdio.h>
int traversal(int n,int m);
int main()
{
    int A[4]={0};
    int i,a,b;
    for(i=0;i<4;i++){
        scanf("%d",&A[i]);
    }
    a=traversal(A[0],A[1]);
    b=traversal(A[2],A[3]);
    printf("%d",a+b);
    return 0;
}
int traversal(int n,int m){
    int a=0,i;
    for(;n/10!=0;n/=10){
        if(n%10==m)
           a++; 
    }   
    if(n==m)
        a++;
    n=0;
    for(i=0;i<a;i++){
        n=n*10+m;
    }
    return n;
}
