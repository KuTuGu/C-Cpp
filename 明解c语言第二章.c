2-1
#include <stdio.h>i
int main(void)
{ 
  int x,y;
  puts("请输入两个整数。");
  printf("整数1:");scanf("%d",x);
  printf("整数2:");scanf("%d",y);
  printf("x的值是y的%d%",x*100/y);
  return 0;
}
2-2
#include <stdio.h>
int main(void)
{
  puts("请输入两个整数。");
  printf("整数a:");scanf("%d",x);
  printf("整数b:");scanf("%d",y);
  printf("它们的和是%d,积是%d",x+y,x*y);
  return 0;
}
2-3
#include <stdio.h>
int main(void)
{
  double x;
  puts("请输入一个实数:");
  scanf("%f",x);
  printf("你输入的数是%f。",x);
  return 0;
}
2-4
#include <stdio.h>
int main(void)
{
  int x=1;double y=2.000000;
  printf("整数常量与整数变量的乘积:%d",x*1);
  printf("浮点型常量与浮点型变量的乘积:%f",y*2.000000);
  return 0;
}
2-5
#include <stdio.h>
int main(void)
{
  puts("请输入两个整数。");
  printf("整数a:");scanf("%d",x);
  printf("整数b:");scanf("%d",y);
  printf("a是b的%f%",(double)a*100/b);
  return 0;
}
2-6
#include <stdio.h>
int main(void)
{
  int x;
  puts("请输入您的身高:");
  scanf("%d",x);
  printf("你的标准体重是%.1f。",(x-100)*0.9);
  return 0;
}

  
