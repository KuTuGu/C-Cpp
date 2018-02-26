#include<stdio.h>
int main()
{
    int a,b,sum;
    scanf("%d%d\n",&a,&b) != EOF);
    sum = a+b;
	if(sum < 0){
	    printf("-");
	    sum = -sum;
	}
    if(sum>=1000000)
        printf("%d,%03d,%03d\n",sum/1000000, (sum/1000)%1000, sum%1000);
    else if(sum >= 1000)
        printf("%d,%03d\n",sum/1000,sum%1000); 
    else
        printf("%d\n", sum);
    return 0;
}

/*//测试点8没有通过
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int i,j = 1,a,b,num = 2;
    char len[9] = {'\0'},result[9] = {'\0'};
    scanf("%d%d",&a,&b);
    sprintf(len,"%d",a + b);
    int A = 0;
    result[0] = len[strlen(len) - 1];
    for(i = strlen(len) - 2;i >= 0;i--){
        result[j++] = len[i];
        if(num++ % 3 == 0 && len[i - 1] && len[i - 1] != '-')
            result[j++] = ',';
    }
    for(i = strlen(result) - 1;i >= 0;i--)
        printf("%c",result[i]);
    return 0;
}*/