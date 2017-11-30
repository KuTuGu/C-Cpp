#include <stdio.h>
int sum(int n);
int pow(int x,int y);
int main()
{
    int n;
    scanf("%d",&n);
    while(n>=1&&n<=1000){
    	printf("%d\n",sum(n)%10000);
        scanf("%d",&n);
    }
    return 0;
}
int sum(int n)
{
	if(n==1){
        return 0;
    } 
    else if(n==2){
        return 2;
    }
    else{
        return pow(2,n-1)-sum(n-1);
    }
}
int pow(int x,int y)
{
    if(y>0){
    	return x*pow(x,y-1);
    }
    else{
        return 1;
    }
}
