//格式错误
#include <stdio.h>
#include <string.h>
int main()
{
    int i=1;
    char p[81];
    char *q[80];//单词不超过80
    fgets(p,80,stdin);
    q[0]=strtok(p," ");//空格分割字符串
    while((q[i]=strtok(NULL," ")))
        i++;
    while(i--){
        if(i!=0)
            printf("%s ",q[i]);
        else
            printf("%s",q[i]);
    }
    return 0;
}   
