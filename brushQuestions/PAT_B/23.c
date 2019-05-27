//运行正确
#include <stdio.h>
int main()
{
    int i;
    int A[10] = {0};
    for(i = 0;i < 10;i++){
        scanf("%d",&A[i]);
    }
    for(i = 1;i < 10;i++){//找首位最小值
        if(A[i]){
            printf("%d",i);
            A[i]--;
            break;
        }
    }
    for(i = 0;i < 10;i++){//其余位最小值
        while(A[i]){
            printf("%d",i);
            A[i]--;
        }
    }
    return 0;
}