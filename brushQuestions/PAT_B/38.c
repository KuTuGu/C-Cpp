//厉害的思路：将分数作为数组的下标，而对应存放的，是该分数出现的次数
#include <stdio.h>
int main()
{
    int i,N,a;
    int A[100] = {0};
    //读分数
    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%d",&a);
        A[a]++;
    }
    //取分数
    scanf("%d",&N);
    //查找分数
    for(i = 0;i < N;i++){
        scanf("%d",&a);
        if(i != N - 1)
            printf("%d ",A[a]);
        else
            printf("%d",A[a]);
    }
    return 0;
}
