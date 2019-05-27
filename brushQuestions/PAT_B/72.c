//测试点2:输出时注意保留四位
#include <stdio.h>
int main()
{
    int N,M,i,j,a,b,c,num1 = 0,num2 = 0;
    int A[6] = {0};
    char B[5] = {'\0'}; 
    scanf("%d%d",&N,&M);
    for(i = 0;i < M;i++)
        scanf("%d",&A[i]);
    while(N--){
        c = 0;
        scanf("%s%d",B,&a);
        for(i = 0;i < a;i++){
            scanf("%d",&b);
            for(j = 0;j < M;j++){
                if(b == A[j]){
                    if(c == 0){
                        printf("%s:",B);
                        num1++;
                        c++;
                    }
                    printf(" %04d",b);
                    num2++;
                }
            }
        }
        if(c == 1)
            printf("\n");
    }
    printf("%d %d",num1,num2);
    return 0;
}