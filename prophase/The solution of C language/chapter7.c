7-1
#include <stdio.h>
int main(void)
{
  int n;
  printf("请输入一个数:"):
  scanf("%d||%f",&n);
  printf("该数的长度为:%d",sizeof(n));
  return 0;
}
7-2

7-3
#include <stdio.h>
int rrotate(unsigned x,int n)
{
  x>>n;
  return x;
}
int lrotate(unsigned x,int n)
{
  x<<n;
  return x;
}
int main(void)
{
  unsigned x,n;
  printf("输入整数:");scanf("%d",&x);
  printf("输入要移动的位数:");scanf("%d",&n);
  rrotate(x,n);
  lrotate(x,n);
  return 0;
}
7-4,7-5(类似）
#include <stdio.h>
int count-bits(unsigned x)
{
  int bits=0;
  ......
  int a[],j=0;(void函数)
  for(i=int-bits()-1;i>=0;i--){
    a[j]=((x>>i)&1u) ? 1 : 0;
    j++;
  }
  return a[];
}
int main()
{ int a[]
  a[]=print-bits(unsigned x);
  a[pos-1]=1;
  return a[];
}
......
7-6

7-7
#include <stdio.h>
int main(void)
{
  int n;
  printf("请输入一个小数:"):scanf("%f",&n);
  printf("float型:%f",(float)n);
  printf("double型:%f",(double)n);
  printf("long double型:%f",(long double)n);
  return 0;
}
7-8
#include <stdio.h>
int main(void)
{
  printf("float型长度为:%d",sizeof(float));
  printf("double型长度为:%d",sizeof(double));
  printf("long double型长度为:%d",sizeof(long double));
  return 0;
}
7-9
#include <stdio.h>
#include <math.h>
int main(void)
{
  int n;
  printf("请输入一个整数:"):scanf("%d",&n);
  printf("该面积的正方形的边长为:%d",sqar(n));
  return 0;
}
7-10，7-11(类似)
#include <math.h>
int main(void)
{
  int n,x=0,i;double j=0.0
  do{
    j+=0.01;x++;i=x/100;
    printf("i=%d         j=%f",i,j);
  }while(i<=1||j<=1.0)
  return 0;
}


    
    



















  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
