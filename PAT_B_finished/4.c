//运行正确
#include <stdio.h>

int main() {
  int N,i,max=0,min=100,a,maxi,mini;
    char A[100][3][11]={{{'\0'}}};
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%s %s %d",A[i][0],A[i][1],&a);
        if(a>max){
            max=a;
            maxi=i;
        }
        if(a<min){
            min=a;
            mini=i;
        }
    }
    printf("%s %s\n",A[maxi][0],A[maxi][1]);
    printf("%s %s",A[mini][0],A[mini][1]);
    return 0;
}
