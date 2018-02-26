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