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
}