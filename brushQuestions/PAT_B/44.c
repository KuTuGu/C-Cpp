//运行正确
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,j,N,m,n;
    char a;
    char A[10];//最大8字节
    char *num[13] = {"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    char *carry[12] = {"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    scanf("%d\n",&N);
    for(j = 0;j < N;j++){
        i = m = 0;
        while(i < 10)
            A[i++] = '\0';
        i = 0;
        while((a = getchar()) != '\n')
            A[i++] = a;
        for(i = 0;A[i] != '\0';i++){
            if(!(A[i] >= '0' && A[i] <= '9'))
                m++;
        }
        if(m == 0){//是数字
            n = atoi(A);
            if(n < 13)
                printf("%s\n",num[n]);
            else if(n % 13)
                printf("%s %s\n",carry[n / 13 - 1],num[n % 13]);
            else
                printf("%s\n",carry[n / 13 - 1]);
        }
        else{//火星文
            if(m > 4){//一个单词最长为4,所以有两个单词
                char *p = strtok(A," ");//空格分割;
                for(i = 0;i < 12;i++){
                    if(!(strcmp(carry[i],p)))
                        m = (i + 1) * 13;
                }
                p = strtok(NULL," ");
                for(i = 0;i < 13;i++){
                    if(!(strcmp(num[i],p)))
                        printf("%d\n",m + i);
                }
            }
            else{//一个单词
                for(i = 0;i < 13;i++){
                    if(!(strcmp(num[i],A))){
                        printf("%d\n",i);
                    }
                }
                for(i = 0;i < 12;i++){
                    if(!(strcmp(carry[i],A))){
                        printf("%d\n",(i + 1) * 13);
                    }
                }
            }
        }
    }
    return 0;
}