#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int score;
    int answer; /* bitwise storage for at most 5 options */
    int wrong;
}Prob;
/* read 'count option1 ...' format */
int readanswer();
int main()
{
    int N,M,max = 0,useless,i,j;
    Prob probs[100];
    /* read the answers for each problem */
    scanf("%d %d", &N, &M);
    for(i = 0;i < M;i++){
        scanf("%d %d", &probs[i].score, &useless);
        probs[i].wrong = 0;
        probs[i].answer = readanswer();
    }
    /* read every student's answer */
    for(i = 0;i < N;i++){
        int score = 0;
        for(j = 0;j < M;j++){
            /* read answer for one problem */
            while(getchar() != '(');
            if(readanswer() == probs[j].answer) /* If it is right */
                score += probs[j].score;
            else if(max < ++probs[j].wrong)     /* If most students got it wrong */
                max = probs[j].wrong;
            while(getchar() != ')');
        }
        printf("%d\n", score);
    } 
    if(max == 0)
        printf("Too simple");
    else{
        printf("%d", max);
        for(i = 0;i < M;i++){
            if(probs[i].wrong == max)
                printf(" %d",i + 1);
        }
    }
    return 0;
}
int readanswer(){
    char c;
    int count,k,answer = 0;
    scanf("%d", &count);
    for(k = 0;k < count;k++)
    {
        while((c = getchar()) == ' ');
        answer |= 1 << (c - 'a');
    }
    return answer;
}
//链接：https://www.jianshu.com/p/4a8a570e41c3
