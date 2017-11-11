#include <stdio.h>
int main()
{
    int i;
    char s[100];
    scanf("%s",&s);
    while(s[i]){//此处应该是非0循环，为什么输入0循环不停止
        printf("%d\n",s[i]);
        i++;
    }
    return 0;
}




