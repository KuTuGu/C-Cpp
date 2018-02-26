//运行正确
#include<stdio.h>
int max(int x,int y);
int main(){
    int m,n,a,b;
    do{
        m=n=0;
        scanf("%d%d",&m,&n);
    	a=max(m,n);
    	if(a==m)//a设置为大值，b为小值
        	b=n;
    	else
    	    b=m;
    	for(m=1;m<=a;m++){//最大的公倍数为a*b,必须找到结束循环的条件
        	if(m*b%a==0)//通过求a的余来判断是否公倍，不需要求a的倍数
    			break;
    	}
        if(n==0)
            break;
    	printf("%d\n",m*b);
	}while(n);//没有用
	return 0;
}
int max(int x,int y){
    if(x>y)
        return x;
    else 
        return y;
}
