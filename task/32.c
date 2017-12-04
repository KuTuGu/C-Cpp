//部分正确（输出正确）
#include<stdio.h>
int main()
{
    int n,i,j=0,temp;
    int A[3]={0};//n<1000简化了许多
    scanf("%d",&n);
    for(i=0;n%10!=0;i++,n/=10){
        A[i]=n%10;
    }
    A[i]=n;
    temp=A[0];//n<1000简化了许多
    A[0]=A[2];
    A[2]=temp;
    for(i=0;i<3;i++){
        for(;A[i]>0;A[i]--){
            if(i==0)
                printf("B");
            else if(i==1)
                printf("S");
            else{
                for(j=1;j<=A[2];j++){
                    printf("%d",j);
                }
            }
            if(j>A[2]&&i==2)
                break;//A[2]双循环，必须要中断
        }
    }
    return 0;
}
