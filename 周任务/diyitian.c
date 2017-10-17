#include <stdio.h>
int main()
{
	int x,y,z;
	puts("请输入三角形的三条边长:");
	scanf("%d %d %d",&x,&y,&z);
	if(x+y>z&&y+z>x&&x+z>y){
		if(x==y==z)
			printf("%d",1);
		else if(x==y!=z||x==z!=y||y==z!=x)
			printf("%d",2);
		else
			printf("%d",3);
	}
	else
		printf("%d",0);
	return 0;
}
