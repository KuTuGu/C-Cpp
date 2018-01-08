#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,j,N,m,n;
    char A[100][10];//最大8字节
    char *num[13] = {"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    char *carry[12] = {"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    scanf("%d\n",&N);
    for(i = 0;i < N;i++){
        fgets(A[i],10,stdin);
        m = 0;
        for(j = 0;A[i][j] != '\0';j++){
            if(!(A[i][j] >= '0' && A[i][j] <= '9'))
                m++;
        }
        if(m == 0){//是数字
            n = atoi(A[i]);
            if(n > 12)
                printf("%s %s\n",carry[n/13],num[n%13]);
            else
                printf("%s\n",num[n]);
        }
        else{
            if(m > 4){//一个单词最长为4
                char *p = strtok(A[i]," ");//空格分割;
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
            else{
                for(i = 0;i < 13;i++){
                    if(!(strcmp(num[i],A[i]))){
                        printf("%d\n",i);
                    }
                }
            }
        }
    }
    return 0;
}