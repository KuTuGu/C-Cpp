#include <stdio.h>
int main()
{
	int x,y,temp;
	printf("请输入两个正整数:");
	scanf("%d %d",&x,&y);
	do{
		if(x<y){
			temp=x;
			x=y;
			y=temp;
		}
		temp=y;
		y=x%y;
		x=temp;
	}while(y!=0);
	printf("两者的最大公因数是%d:",x);
	return 0;
}

