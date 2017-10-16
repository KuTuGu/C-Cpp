1.
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
2.
#include <stdio.h>
int main()
{
        int x,y,z;
	puts("请输入两门课的成绩:");
	scanf("%d %d",&x,&y);
	if(x<0||x>100||y<0||y>100)
		z=1;
	else if(x<60||y<60)
		z=2;
	else(x>60&&y>60)
		z=3;
	switch(z){
		case 1:  puts("it is error.");     break;
                case 2:  puts("it is not pass.");  break;
		case 3:  puts("it is pass.");      break;
	}
	return 0;
}
3.
#include <stdio.h>
int main()
{
        int x,y,z=0,i=3,j=0;
	for(;z<i;z++){
		for(x=1;x<=z;x++)
			putchar(' ');
		for(y=1;y<=5-2*z;y++)
			putchar('*');
		putchar('\n');
	}
	for(;z<=i-1;z++,i--){
		for(;i-2>0;i--)
			putchar(' ');
		for(;j<3+2*z;j++)
			putchar('*');
	 	putchar('\n');
	}
	return 0;
4.
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
5.
#include <stdio.h>
int main()
{
        int x,y,a[20][5],i=0,j=0;
	for(x=1;x<=100;x++){
		for(y=1;y<=x/2;y++){
			if(y!=1&&x%y==0)
				continue;
		}
		a[i][j]=x;
		j++;
		if(j==4){
			i++;
			j=0;
		}
	}	
	printf("1到100之间的素数有:%d",a[i][j]);
	return 0;
}

	
		
			
	
