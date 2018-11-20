8-1
#include <stdio.h>
#define diff(x,y)(((x)>(y)) ? ((x)-(y)) : ((y)-(x)))
int main(void)
{
  int x,y;
  printf("请输入两个整数:");
  scanf("%d %d",x,y);
  printf("两值之差为:%d",diff(x,y));
  return 0;
}
8-2
#include <stdio.h>
#define diff(x,y)((x)>(y)) ? (x) : (y))
int main(void)
{
  int a,b,c,d;
  printf("请输入四个整数:");
  scanf("%d %d %d %d",a,b,c,d);
  printf("四值中的最大值为为:%d",diff(diff(a,b),diff(c,d)));
  printf("四值中的最大值为为:%d",diff(diff(a,b),diff(c,d)))
  return 0;
}
8-3
#include <stdio.h>
#define diff(type,a,b)(type=a,a=b,b=type)
int main(void)
{
  int a,b,type;
  printf("请输入三个整数:");
  scanf("%d %d %d",a,b,type);
  diff(type,a,b);
  printf("%d %d",a,b);
  return 0;
}
8-4
#include <stdio.h>
#define number 5
......
  for(j=0;j<n;j++)
    if(a[j]>a[j+1]){
      int temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
    }
......
8-5
#include <stdio.h>
enum sex {male female};
enum sex select(void)
{
  int n;
  do{
    printf("请输入您的性别,0---male  1---female:");
    scanf("%d",&n);
  }while(n!=0||n!=1);
  return n;
}
int male()
{
  printf("男性");
}
int female()
{
  printf("女性");
}
int main(void)
{
  enum sex selected;
  do{
    switch(selected=select()){
    case male:  male();break;
    case female:   female();break;
    } 
  }while(selected!=Invalid);
  return 0;
}
8-6
#include <stdio.h>    
int main(void)
{
  int n>0,s=1;
  for(;n>0;n--){
    s*=n;
    return s;
  }
  return 0;
}
8-7
#include <stdio.h>   
int c(int n,int r){
  Cn=Cn-1+Cn-1;
  Cn=Cn=1;
  Cn=n;
  return Cn;
}
8-8

8-9
#include <stdio.h> 
int main(void)
{
  int n=0;
  while((ch=getchar()) !=EOF){
    if(ch="\n")
      n++;
    return n;
  }
  return 0;
}
8-10
#include <stdio.h> 
......
  puts("数字出现的次数:");
  for(i=0;i<10;i++){
    printf("'%d':");
    for(i=0;i<cnt[i];i++)
      printf("*");
  }
  return 0;
}



















  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
