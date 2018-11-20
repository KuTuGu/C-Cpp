//运行正确
#include <stdio.h>
#include <math.h>
int main()
{
    int N,i,j,m,n,left;
    char a;
    scanf("%d %c",&N,&a);
    for(i = 1;i <= 22;i++){//最大43行
        if(N < 2 * pow(i,2)-1)
            break;
    }
    left = N - (2 * pow(i - 1,2) -1);
    n = i - 1;
    while(--i){
        for(m = n - i;m > 0;m--){
            printf(" ");
        }
        m++;
        for(j = 0;j < 2 * i - 1;j++){
            printf("%c",a);
        }
        printf("\n");
    }
    for(i = 2;i <= n;i++){
        for(m = n - i;m > 0;m--){
            printf(" ");
        }
        for(j = 0;j < 2 * i - 1;j++){
            printf("%c",a);
        }
        printf("\n");
    }
    printf("%d",left);
    return 0;
}