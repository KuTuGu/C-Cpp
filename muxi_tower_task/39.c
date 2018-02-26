//两元haaaa
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    int a,b,c,d,e,f;//面值数
    int A[100];//💰
    scanf("%d",&n);
    while(n!=0){
        sum=0;
        for(i=0;i<n;i++){
            scanf("%d",&A[i]);
            a=A[i]/100;
            b=(A[i]-a*100)/50;
            c=(A[i]-a*100)%50/10;
            d=(A[i]-a*100)%50%10/5;
            e=(A[i]-a*100)%50%10%5/2;
            f=(A[i]-a*100)%50%10%5%2;
            sum+=(a+b+c+d+e+f);
        }
        printf("%d\n",sum);
        scanf("%d",&n);
    }
    return 0;
}

