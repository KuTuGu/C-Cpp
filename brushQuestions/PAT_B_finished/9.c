//运行正确
#include <stdio.h>
#include <string.h>
int main()
{
    int i = 1,j;
    char p[81];
    char *q[80];//单词不超过80
    fgets(p,82,stdin);
    q[0] = strtok(p," ");//空格分割字符串
    while((q[i] = strtok(NULL," ")))
        i++;
    i -= 1;
    for(j = 0;q[i][j] != '\n';j++)
        printf("%c",q[i][j]);
    while(i--)
        printf(" %s",q[i]);
    return 0;
}   
