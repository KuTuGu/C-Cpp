//测试点4，7：N超出int范围
#include <stdio.h>
#include <string.h>
int main()
{
    int i,sum;
    char N[101] = {'\0'},result[11][6] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    scanf("%s",&N);  
    int len = strlen(N);
    for(i = 0;i < len;i++){
        sum += N[i] - '0';
    }
    memset(N,'\0',len * sizeof(char));
    sprintf(N,"%d",sum);
    len = strlen(N);
    for(i = 0;i < len;i++){
        if(i)
            printf(" ");
        printf("%s",result[N[i] - '0']);
    }
    return 0;
}