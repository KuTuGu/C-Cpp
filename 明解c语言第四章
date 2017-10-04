4-1
#include <stdio.h>
int main(void)
{ 
  int x,y;
  puts("请输入一个整数:");
  scanf("%d",&x);
  do{
    if(x>0)
      printf("%d是正数",x);
    else if(x<0)
      printf("%d是负数",x);
    else
      printf("%d是0",x);
    printf("你还要重复上述操作吗？yes－－0，no－－1");
    scanf("%d",&y);
  }while(y=0);
  return 0;
}
4-2
#include <stdio.h>
int main(void)
{
  int x,y;
  puts("请输入两个整数。");
  printf("整数a:");scanf("%d",x);
  printf("整数b:");scanf("%d",y);
  if(x>y)
    printf("大于等于y小于等于x的所有整数的和是%d",(x+y)*(x-y+1)/2);
  else
    printf("大于等于x小于等于y的所有整数的和是%d",(x+y)*(y-x+1)/2);
  return 0;
}
4-3
#include <stdio.h>
int main(void)
{
  int no;
  puts("请输入一个正整数:");
  scanf("%d",&no);
  while(no>=0){
    printf("%d",no);
    no--;
    printf("\n");
  }
  return 0;
}
4-4
#include <stdio.h>
int main(void)
{
  int no;
  printf("请输入一个正整数:");
  scanf("%d",&no);
  while(no>1)
    printf("%d",no--);
  printf("\n");
  return 0;
}
4-5
#include <stdio.h>
int main(void)
{
  int i,no;
  printf("请输入一个正整数:");
  scanf("%d",&no);
  i=0;
  while(i<=no){
    printf("%d",++i);
    printf("\n");
  }
  return 0;
}
4-6
#include <stdio.h>
int main(void)
{
  int no,i=1;
  printf("请输入一个正整数:");
  scanf("%d",&no);
  for(i=1;2*i<=no;i++)
    printf("%d",2*i);
  return 0;
}
4-7
#include <stdio.h>
int main(void)
{
  int no,i=1;
  printf("请输入一个正整数:");
  scanf("%d",&no);
  for(i=1;pow(2,i)<=no;i++)
    printf("%d",pow(2,i));
  return 0;
}
4-8
#include <stdio.h>
int main(void)
{
  int no;
  printf("正整数:");
  scanf("%d",&no);
  while(no-->0){
    putchar('*');
    putchar('\n');
  }
  return 0;
}
4-9
#include <stdio.h>
int main(void)
{
  int no,i=1;
  printf("请输入一个正整数:");
  scanf("%d",&no);
  while(no>0){
    for(i=1;i<=no;i++){
      if(i%2=0)
        printf("-");
      else
        printf("+");
    }
  }
  return 0;
}
4-10
#include <stdio.h>
int main(void)
{
  int no;
  printf("请输入一个正整数:");
  scanf("%d",&no);
  while(no>0){
    printf("*\n");
    no--;
  }
  return 0;
}
4-11
#include <stdio.h>
int main(void)
{
  int no,i=0,x;
  do{
    printf("请输入一个正整数:");
    scanf("%d",&no);
    x=no;
    if(no<=0)
      puts("请不要输入非正整数。");
  }while(no<=0);
  while(no>0){
    i=i*10+no%10;
    no/=10;
  }
  printf("%d逆向显示的结果是%d",x,i);
  return 0;
}
4-12
#include <stdio.h>
int main(void)
{
  int no,i=0,x;
  printf("请输入一个正整数:");
  scanf("%d",&no);
  x=no;
  while(no>0){
    no/=10;
    i++;
  }
  printf("%d的位数是%d",x,i);
  return 0;
}
4-13
#include <stdio.h>
int main(void)
{
  int n;
  do{
    printf("请输入一个正整数:");
    scanf("%d",&n);
    if(n<=0)
      puts("请不要输入非正整数。");
  }while(n<=0);
  printf("1到%d的和为%d",n,(1+n)*n/2);
  return 0;
}
4-14
#include <stdio.h>
int main(void)
{
  int n,i=1;
  do{
    printf("请输入一个正整数:");
    scanf("%d",&n);
    if(n<=0)
      puts("请不要输入非正整数。");
  }while(n<=0);
  for(i=1;i<=n;i++)
    printf("%d",i%10);
  return 0;
}
4-15
#include <stdio.h>
int main(void)
{
  int x,y,z;
  printf("开始数值(cm):");scanf("%d",&x);
  printf("结束数值(cm):");scanf("%d",&y);
  printf("间隔数值(cm):");scanf("%d",&z);
  for(;x<=y;x+=z)
    printf("%dcm     %.2fkg",x,(double)(x-100)*0.9);
  return 0;
}
4-16
#include <stdio.h>
int main(void)
{
  int no,i=1;
  printf("请输入一个正整数:");
  scanf("%d",&no);
  for(i=1;2*i-1<=no;i++)
    printf("%d",2*i-1);
  return 0;
}
4-17
#include <stdio.h>
int main(void)
{
  int n,i=1;
  printf("请输入一个正整数:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    printf("%d的二次方是%d",i,pow(i,2));
  return 0;
}
4-18
#include <stdio.h>
int main(void)
{
  int n,i,x,y=1;
  printf("请输入一个正整数:");
  scanf("%d",&n);
  i=n/5,x=n%5;
  for(y=1;y<=i;y++)
    printf("*****\n");
  for(y=1;y<=x;y++)
    printf("*");
  return 0;
}
4-19
#include <stdio.h>
int main(void)
{
  int n,i,x=0;
  printf("整数值:");
  scanf("%d",&n);
  for(i=1.i<=n;i++)
    if(n%i==0){
      printf("%d\n",i);
      x++;
    }
  return 0;
}
4-20
#include <stdio.h>
int main(void)
{
  int i,j,x,y;
  printf("  |");
  for(x=1;x<=9;x++)
    printf("%3d",x);
    printf("\n");
  for(y=1;y<=30;y++);
    printf("-");
  for(i=1;i<=9;i++){
    printf("%d |",i);
    for(j=1;j<=9;j++)
      printf("%3d",i*j);
    printf("\n");
  }
  return 0;
}
4-21
#include <stdio.h>
int main(void)
{
  int n,i,j;
  printf("请输入一个正整数:");
  scanf("%d",&n); 
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++)
      printf("*");
  }
  return 0;
}
4-22
#include <stdio.h>
int main(void)
{
  int n,m,i,j,max,min;
  printf("正整数1:"); scanf("%d",&m);
  printf("正整数2:"); scanf("%d",&n);
  max=m;
  if(n>max)
    max=n,min=m;
  else
    max=m,min=n;
  for(i=1;i<=max;i++){
    for(j=1;j<=min;j++)
      printf("*");
  }
  return 0;
}
4-23
左上角
#include <stdio.h>
int main(void)
{
  int i,m,n;
  for(n=1;n<=m;n++){
    for(i=n;i<=m;i++)
    printf("*")；
    printf("\n");
  }
  return 0;
}
右上角
#include <stdio.h>
int main(void)
{
  int i,j,m,n;
  for(n=1;n<=m;n++){
    for(i=1;i<n;i++)
    printf(" ");
    for(j=n;j<=m;j++)
    printf("*");
    printf("\n");
  }
  return 0;
}   
4-24
#include <stdio.h>
int main(void)
{
  int x,i,j,m;
  printf("金字塔有几层:");scanf("%d",x);
  for(m=1;m<=x;m++){
    for(i=1;i<=(x-1);i++)
      printf(" ");
    for(j=1;j<=(m-1)*2+1;j++)
      printf("*");
      printf("\n");
  }
  return 0;
}
4-25
#include <stdio.h>
int main(void)
{
  int x,i,j,m;
  printf("金字塔有几层:");scanf("%d",x);
  for(m=1;m<=x;m++){
    for(i=1;i<=(m-1);i++)
      printf(" ");
    for(j=1;j<=2*(x-m)+1;j++)
      printf("%d",m%10);
      printf("\n");
  }
  return 0;
}




























    

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  

      


























































  
  





























 
