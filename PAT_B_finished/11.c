//运行正确
#include <stdio.h>
int main()
{
  long T,A,B,C,i;
  scanf("%ld\n",&T);
  for(i=1;i<=T;i++){
    scanf("%ld %ld %ld\n",&A,&B,&C);
    if(A+B>C){
      printf("Case #%ld: true\n",i);
    }
    else{
     printf("Case #%ld: false\n",i);
    }
  }
  return 0;
}

