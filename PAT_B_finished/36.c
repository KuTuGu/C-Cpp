//运行正确
#include<stdio.h>
int main()
{
    int N,i,j;
    char C;
    scanf("%d %c",&N,&C);
    for(i = 0;i < N;i++){//top
        printf("%c",C);
    }
    printf("\n");
    for(i = 0;i < (N + 1) / 2 - 2;i++){//middle
        printf("%c",C);
        for(j = 0;j < N - 2;j++)//注意在i的循环体内换变量，不要还用i
            printf(" ");
        printf("%c",C);
        printf("\n");
    }
    for(i = 0;i < N;i++){//bottom
        printf("%c",C);
    }
    return 0;
}