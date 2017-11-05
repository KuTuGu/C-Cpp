#include <stdio.h>
int main()
{
    int x,y,i=1,b;
	for(x=2;x<=100;x++){
        b=0;//很重要，b在一次循环判断完后要初始化为0，否则影响下一次判断。
		for(y=2;y<=x/2;y++){
			if(x%y==0){
				b++;
                break;
            }
		}
        if(b==0){//注意==
            if(i%5!=0)
		        printf("%d ",x);
            else if(i%5==0)
                printf("%d\n",x);
		    i++;
        }
    }
	return 0;
}
