1-1
#include <stdio.h>
int main(void)
{
  int x=15,y=37;
  x-=y;
  printf("15减去37的结果是%d",x);
  return 0;
}
1-2
#include <stdio.h>
int main(void)
{
  printf("天\n地\n人");
  return 0;
}
1-3
#include <stdio.h>
int main(void)
{
  printf("喂!\n\n您好!\n再见。");
  return 0;
}
1-4
#include <stdio.h>
int main(void)
{
  int x=3.14;
  printf("%d",x);
  return 0;
}
1-5
#include <stdio.h>
int main(void)
{
  int x;
  do{
    printf("请输入一个整数:");
    scanf("%d",&x);
  }while(x>0);
  printf("%d",x+12);
  return 0;
}
1-6
#include <stdio.h>
int main(void)
{ 
  int x;
  do{
    printf("请输入一个整数:");
    scanf("%d",&x);
  }while(x>0);
  printf("%d",x-6);
  return 0;
}
1-7
#include <stdio.h>
int main(void)
{
  puts("天");
  puts("地");
  puts("人");
  return 0;
}
1-8
#include <stdio.h>
int main(void)
{
  int x,y;
  printf("请输入两个整数。");
  puts("整数1:");
  puts("整数2:");
  scanf("%d %d",x,y);
  printf("它们的乘积是%d",x*y);
  return 0;
}
1-9
#include <stdio.h>
int main(void)
{
  int x,y,z;
  puts("请输入三个整数。");
  puts("整数1:");
  puts("整数2:");
  puts("整数3:");
  scanf("%d %d %d",x,y,z);
  printf("它们的和是%d",x+y+z);
  return 0;
}
  
