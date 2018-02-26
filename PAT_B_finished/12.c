//运行正确
#include <stdio.h>
#include <math.h>
int main()
{
    int N,i,a,j = 0,n = 0;
    int sum[5] = {0};
    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%d",&a);
        if(a % 5 == 0 ){
            if(a % 2 == 0)
                sum[0] += a;
        }
        else if(a % 5 == 1){
            sum[1] += pow(-1,n) * a;
            n++;
        }
        else if(a % 5 == 2)
            sum[2]++;
        else if(a % 5 == 3){
            sum[3] += a;
            j++;
        }
        else{
            if(a > sum[4])
                sum[4] = a;
        }
    }
    for(i = 0;i < 5;i++){
        if(sum[i]){
            if(i < 3)
                printf("%d ",sum[i]);
            else if(i == 3)
                printf("%.1f ",(float)sum[3] / j);
            else
                printf("%d",sum[4]); 
        }
        else if(i != 1){
            if(i != 4)
                printf("N ");
            else
                printf("N");
        }
        else{//sum[1]为0有两种情况
            if(n == 0)
                printf("N ");
            else 
                printf("0 ");
        }
    }
    return 0;
}
