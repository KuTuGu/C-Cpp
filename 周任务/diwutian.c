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