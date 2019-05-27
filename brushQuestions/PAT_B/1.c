//运行正确
#include <stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF) {
        i=0;
        if (n>1&&n<=1000) {
            do{
                if(n%2==0){
                    n /= 2;
                    i++;
                }
                else{
                    n=(3*n+1)/2;
                    i++;
                }
            }while(n!=1);
        }
        if(n==1) 
            printf("");
        printf("%d\n",i);
    }
    return 0;
}