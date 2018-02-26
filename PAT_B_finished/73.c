/*
错误判断：学生选项<异或>正确答案这个数的每一位实际上表示学生在这一选项上是否正确
如正确答案为BC(00110)，学生选了AC(00101)，那么两者异或值为00011，即表示AB两选项出现错误

分析起来就是：
存在正确答案是0的位，上述异或值为1这样的情况，则说明学生有多选错误选项
正确答案是0的位，异或值也全是0，则学生只选择了部分正确答案

判断这两者的方法就是将异或值与正确答案取逻辑或,
如果这个结果大于正确答案，则说明有异或值为1而正确答案为0的位;
如果二者一样，说明没有
*/
#include <stdio.h>
#define MAX_M 100
#define MAX_OPTIONS 5
int readanswer();
int main()
{
    int N, M, full_score[MAX_M] = {0}, correct_ans[MAX_M] = {0}, 
        wrong_ans[MAX_M] = {0}, wrong_count[MAX_M][5] = {{0}},
        wrong_count_max = 0;
    int i,j,k;
    
    scanf("%d%d",&N,&M);
    /* Read M lines */
    int count_options;
    for(i = 0; i < M; i++)
    {
        scanf("%d %d", full_score + i, &count_options);
        correct_ans[i] = readanswer();
    }
    
    /* Read N lines */
    for(i = 0; i < N; i++)
    {
        float score = 0;
        int answer;
        for(j = 0; j < M; j++)
        {
            while(getchar() != '(');
            answer = readanswer();
            wrong_ans[j] = answer ^ correct_ans[j];
            
            if(wrong_ans[j] == 0)               /* all correct */
                score += full_score[j];
            else if((wrong_ans[j] | correct_ans[j]) == correct_ans[j])               
                score += 0.5 * full_score[j];   /* partially corrent */
            
            /* For every option, record the number of students got wrong */
            for(k = 0; k < MAX_OPTIONS; k++)
            {
                wrong_count[j][k] += wrong_ans[j] >> k & 1; /* k-th bit */
                if(wrong_count[j][k] > wrong_count_max)
                    wrong_count_max = wrong_count[j][k];
            }
            
            while(getchar() != ')');
        }
        printf("%.1f\n", score);
    }
    
    if(wrong_count_max == 0)
        printf("Too simple");
    else{
        for(i = 0; i < M; i ++){
            for(j = 0; j < MAX_OPTIONS; j++){
                if(wrong_count[i][j] == wrong_count_max){
                    printf("%d %d-%c\n", wrong_count_max, i + 1, j + 'a');
                }
            }
        }
    }
    return 0;
}
int readanswer(){
    char c;
    int answer = 0, count,i;
    scanf("%d", &count);
    for(i = 0; i < count; i++){
        while((c = getchar()) == ' ');
        answer |= 1 << (c - 'a');
    }
    return answer;
}
//链接：https://www.jianshu.com/p/35333aa3c059
