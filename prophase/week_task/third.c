#include <stdio.h>
int main()
{
    int x,y,z,i=3,j;
	for(z=0;z<i;z++){
		for(x=1;x<=z;x++)
			putchar(' ');
		for(y=1;y<=5-2*z;y++)
			putchar('*');
		putchar('\n');
	}
	for(z=0;z<=i-1;z++,i--){
		for(i=i;i-2>0;i--)
			putchar(' ');
        i=3;
		for(j=0;j<3+2*z;j++)
			putchar('*');
	 	putchar('\n');
	}
	return 0;
}
