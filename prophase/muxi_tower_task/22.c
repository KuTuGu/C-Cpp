//运行正确
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int C1,C2,b,c;
    int A[3];
    double a;
    scanf("%d%d",&C1,&C2);
    a=abs(C2-C1)/100.0;
    b=(int)(a*10)%10;
    c=(int)a;
    A[0]=c/3600;
    A[1]=(c-A[0]*3600)/60;
    A[2]=c%60;
    if(b>=5){
        A[2]++;
    }
    for(b=0;b<3;b++){
        if(b==2){
            if(A[2]>=10){
                printf("%d",A[2]);
            }
            else{
                printf("0%d",A[2]);
            }
        }
        else{
            if(A[b]>=10){
                printf("%d:",A[b]);
            }
            else{
                printf("0%d:",A[b]);
            }
        }
    }
    return 0;   
}
