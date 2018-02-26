/*题目规定时间，暗示找出累加的规律，否则会超时
不能用float，存在精度问题，详见 https://www.jianshu.com/p/937a367ae4ea */
#include <stdio.h>
int main()
{
    int N,i;
    double sum = 0.0,a;
    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%lf",&a);
        sum += a * (i + 1) * (N - i);
    }
    printf("%.2f",sum);
    return 0;
}