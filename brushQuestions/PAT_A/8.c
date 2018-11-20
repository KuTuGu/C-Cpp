#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,now = 0,next,times = 0,pretime;
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d",&next);
        pretime = next > now ? 6 :4;
        times += abs(next - now) * pretime + 5;
        now = next;
    }
    printf("%d",times);
    return 0;
}