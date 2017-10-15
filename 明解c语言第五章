5-1
#include <stdio.h>
int main(void)
{
  int i;
  int arr[5];
  for(i=0;i<5;i++)
    printf("arr[%d]=%d\n",i,i);
  return 0;
}
5-2
#include <stdio.h>
int main(void)
{
  int i;
  int arr[5];
  for(i=0;i<5;i++)
    printf("arr[%d]=%d\n",i,5-i);
  return 0;
}
5-3
#include <stdio.h>
int main(void)
{
  int i;
  int arr[5]={5,4,3,2,1};
  for(i=0;i<5;i++)
    printf("arr[%d]=%d\n",i,arr[i]);
  return 0;
}
5-4
#include <stdio.h>
int main(void)
{
  int i;
  int a[5]={17,23,36};
  int b[5];
  for(i=0;i<5;i++)
    b[i]=a[5-i];
  puts("a     b");
  puts("-------");
  for(i=0;i<5;i++)
    ptinrf("%4d%4d\n",a[i],b[i]);
  return 0;
}
5-5
#include <stdio.h>
int main(void)
{
  int i;
  #define N 7;
  int x[N];
  for(i=0;i<N;i++){
    printf("x[%d]:",i);
    scanf("%d",&x[i]);
  }
  for(i=0;i<=N/2;i++){
    int temp=x[i];
    x[i]=x[N-1-i];
    x[N-1-i]=temp;
  }
  puts("倒序排列了。");
  for(i=0;i<N;i++)
    printf("x[%d]=%d\n",i,x[i]);
  return 0;
}
5-6
#include <stdio.h>
int main(void)
{
  int b;double a;
  a=b=1.5;
  printf("%d,%f",b,a);
  return 0;
}
5-7
#include <stdio.h>
int main(void)
{
  int x,i;
  puts("数据个数：");
  scanf("%d",&x);
  #define N x;
  int arr[N];
  for(i=0;i<N;i++)
    printf("%d号:\n",i+1);scanf("%d",arr[i]);
  puts("{");
  for(i=0;i<N;i++)
    printf("%d,",arr[i]);
  puts("{"); 
  return 0;
}
5-8
#include <stdio.h>
int main(void)
{
  ......//中间的代码和书本上的一样，太多了就不打了
  puts("\n---分布图---");
  printf("      100:");
  for(i=0;i<=9;i++){
    printf("%3d-%3d:",i*10,i*10+9);
    for(j=0;j<=bunpu[i];j++)
      putchar('*');
    putchar(' ');
  }
  for(j=0;j<=bunpu[10];j++)
    putchar('*');
  putchar('\n');
  return 0;
}
5-9
思路：
求bunpu[]中的最大值（冒泡），定义最大值（即可以确定行数）
对每行，分别求出在该行的元素的位置，在每行按顺序查找（将位置数字重新定义一个数组），到这些位置后输出＊，否则输出空格
5-10
#include <stdio.h>
int main(void)
{
  int i,j;
  int a[4][3]={};
  int b[3][4]={};
  printf("请输入数组a：");
  for(i=0;i<=4;i++){
    for(j=0;j<=3;j++)
      printf("a[i][j]={}");scanf("%d",&a[i][j]);
  }
5-11
#include <stdio.h>
int main(void)
{
  int i,j;
  int a[6][2]={};
  printf("请输入数组a：");
  for(i=0;i<6;i++){
    for(j=0;j<2;j++)
      printf("a[i][j]={}");scanf("%d",&a[i][j]);
  }
  for(i=0;i<6;i++)
    sum1[][0]+=a[i][0];
  printf("语文总分:%d,平均分:%d",sum1[][0],sum1[][0]/6);
  for(i=0;i<6;i++)
    sum1[][1]+=a[i][1];
  printf("数学总分:%d,平均分:%d",sum1[][1],sum1[][1]/6);
  5-12
#include <stdio.h>
int main(void)
{
  int x,y,z
  ......
  printf("请输入数组a：");
  for(x=0;x<2;x++)
    for(y=0;y<4;y++)
      for(z=0;z<3;z++)
        printf("a[x][y][z]={}");scanf("%d",&a[x][y][z]);
  return 0;
}




    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  
    
    
 
  

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
