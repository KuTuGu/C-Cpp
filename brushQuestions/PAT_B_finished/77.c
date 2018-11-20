//运行正确
#include <stdio.h>
int main()
{
    int N,M,i,j,G1,g2,min,max,maxi,mini,num;
    int G2[10000] = {0};
    scanf("%d%d",&N,&M);
    for(i = 0;i < N;i++){
        min = M + 1;
        max = -1;
        num = g2 = 0;
        scanf("%d",&G1);
        for(j = 1;j < N;j++){
            scanf("%d",&G2[j]);
        }
        for(j = 1;j < N;j++){//注意是两个if不是两个互斥事件
            if(G2[j] > max && G2[j] <= M){ 
                max = G2[j];
                maxi = j;
            }
            if(G2[j] < min && G2[j] >= 0){
                min = G2[j];
                mini = j;
            }
        }
        for(j = 1;j < N;j++){
            if(j != mini && j != maxi && G2[j] >= 0 && G2[j] <= M){
                g2 += G2[j];
                num++;
            }
        }
        printf("%d\n",(int)((G1 + g2 / (double)num) / 2 + 0.5)); 
    }   
} 