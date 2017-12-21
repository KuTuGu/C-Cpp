//第五个测试点
#include <stdio.h>
int main()
{
    int A[4]={0},B[4]={0};
    int N,max=0,min=9,i,j,m,n,maxi,mini;//没有初始化的后果是将近半个小时的时间都在找错误...
    do{
        scanf("%d",&N);
    }while(N<=0 || N>=10000);
    while(N!=6174){
        m=0;n=0;
        A[0]=N/1000;B[0]=A[0];
        A[1]=N/100%10;B[1]=A[1];
        A[2]=N/10%10;B[2]=A[2];
        A[3]=N%10;B[3]=A[3];
        if(A[0]==A[1]&&A[2]==A[1]&&A[2]==A[3]){
            printf("%d - %d = 0000\n",N,N);
            break;
        }
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){ 
                if(A[j]>max){
                    max=A[j];
                    maxi=j;
                }
            }
            m+=max;
            max=0;
            A[maxi]=0;
            if(i!=3)
                m*=10;
        }
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){ 
                if(B[j]<min){
                    min=B[j];
                    mini=j;
                }
            }
            n+=min;
            min=9;
            B[mini]=9;
            if(i!=3)
                n*=10;
        }
        N=m-n;
        printf("%04d - %04d = %04d\n",m,n,N);
    }
    return 0;
}