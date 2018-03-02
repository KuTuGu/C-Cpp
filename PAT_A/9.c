//小于0.05的数四舍五入为0.0也能输出，不是测试点，不严谨
#include <stdio.h>
int main()
{
    int K,i,j,bottom,L,total = 0;
    float data;
    int index[1001] = {0};
    float A[1001] = {0.0},result[2001] = {0.0};
    scanf("%d",&K);
    for(j = 0;j < K;j++){
        scanf("%d",&index[j]);
        scanf("%f",&A[index[j]]);
    }
    scanf("%d",&L);
    for(j = 0;j < L;j++){
        scanf("%d%f",&bottom,&data);
        for(i = 0;i < K;i++)
            result[index[i] + bottom] += A[index[i]] * data;
    }
    for(i = 2000;i >= 0;i--){
        if(result[i])
            total++;
    }
    printf("%d",total);
    for(i = 2000;i >= 0;i--){
        if(result[i])
            printf(" %d %.1f",i,result[i]);
    }
    return 0;
}