//运行正确
#include <stdio.h>
int main()
{
    int n,i,j,K,temp;
    int A[100]={0},B[100]={0};//设两个数组，一个变，一个判断是否相等
    scanf("%d",&K);
    for(i=0;i<K;i++){
        scanf("%d",&A[i]);
        B[i]=A[i];
    }
    for(i=0;i<K;i++){
        while(A[i]>1){
            if(A[i]%2==0){
                A[i]=A[i]/2;
            }
            else{
                A[i]=(3*A[i]+1)/2;
                
            }
            for(j=0;j<K;j++){
                    if(B[j]==A[i]&&j!=i){//"j!=i"不能放到for里面，否则不到j=K-1就会终止循环
                        B[j]=0;
                    }
            }
        }
    }
    for(i=0;i<K;i++){
        for(j=0;j<K;j++){
            if(B[j]<B[j+1]){
                temp=B[j+1];
                B[j+1]=B[j];
                B[j]=temp;
            }
        }
    }
    for(j=0;j<K;j++){
        if(B[j]!=0&&B[j+1]!=0)
            printf("%d ",B[j]);
        if(B[j]!=0&&B[j+1]==0)
            printf("%d",B[j]);
    }
    return 0;        
}
