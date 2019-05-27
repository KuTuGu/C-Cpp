/*有四个测试点应该是这种情况，感觉题目有漏洞：
输入：3 3 4 5
输出应该是：2
*/
#include <stdio.h>
int main()
{
    int N,M,i,m = 0;
    int A[100000] = {0};
    scanf("%d",&N);
    M = N + 1;
    for(i = 0;i < N;i++){
        scanf("%d",&A[i]);
    }
    while((m < M) && (M > 0)){
        M--;
        m = 0;
        for(i = 0;i < N;i++){
            if(A[i] > M){
                m++;
            }
        }
        printf("%d ...%d\n",m,M);
    }
    printf("%d",M);
    return 0;
}