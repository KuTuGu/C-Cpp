#include <stdio.h>
char *A();
int main()
{
    char d[10]="ZET";//
    printf("%s",d);
    return 0;
}
char *A(){
    char d[10] = {"ZET"};//这个初始化的一种形式，相当于分配了四个空间
    return "13";
}