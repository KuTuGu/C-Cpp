#include <stdio.h>
#include <math.h>
double plus(int n);
int main()
{
    int m,n,i;
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&n);
        printf("%.2f\n",plus(n));
    }
    return 0;
}
double plus(int n)//返回值类型
{
    n=(double)n;
    if(n!=0.0){
        return pow(-1,n+1)*1/n+plus(n-1);
    }
    else {
        return 0.0;
    }
}
