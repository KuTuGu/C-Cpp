/*运行正确
注意库存可能不是整数（测试点2）
可能库存不够（ 测试点3）
*/
#include <stdio.h>
int main()
{
    int N,i,j,D;
    float sum = 0.0,max = 0.0,store = 0.0,money = 0.0;
    float A[1000] = {0.0},B[1000] = {0.0},C[1000] = {0.0};
    scanf("%d%d",&N,&D);
    for(i = 0;i < N;i++){
        scanf("%f",&A[i]);
        store += A[i];
    }
    for(i = 0;i < N;i++){
        scanf("%f",&B[i]);
        money += B[i]; 
    }
    if(D >= store){//库存不够
        printf("%.2f",money);
    }
    else{
        for(i = 0;i < N;i++){
            C[i] = B[i] / A[i];
        }
        while(D){
            for(i = 0;i < N;i++){
                if(C[i] > max){
                    max = C[i];//注意C[j]是小数,max也应为小数
                    j = i;
                }
            }
            if(A[j] >= D){
                sum += D * C[j];
                printf("%.2f",sum);
                D = 0;
            }
            else{
                D -= A[j];
                sum += B[j];
                C[j] = 0;
                max = 0.0;
            }
        }
    }
    return 0;
}