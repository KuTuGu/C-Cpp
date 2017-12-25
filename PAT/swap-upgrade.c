#include <stdio.h>
void swap(int *x,int *y);
int main()
{
    int i,j;
    scanf("%d%d",&i,&j);
    printf("交换之前i：%d，j：%d\n",i,j);
    swap(&i,&j);
    printf("交换之后i：%d，j：%d\n",i,j);
    return 0;
}
void swap(int *x,int *y){
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}