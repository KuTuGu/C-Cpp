//运行正确
#include<stdio.h>
#include<string.h>
int main()
{
    int N,i,j,a,b,m = 0;
    int B[3] = {0};   
    char A[101];
    scanf("%d\n",&N);
    for(i = 0;i < N;i++){
        m = 0;
        B[0] = B[1] = B[2] = 0;
        fgets(A,102,stdin);
        for(j = 0;j < strlen(A) - 1;j++){//注意减一,最后一个为'\n'，注意fgets函数用法
            if(!(A[j] == 'P' || A[j] == 'A' || A[j] == 'T')){
                m++;
                break;
            }
            if(A[j] == 'P')
                a = j;
            if(A[j] == 'T')
                b = j;
        }
        for(j = 0;j < a;j++)
            B[0]++;
        for(j = a + 1;j < b;j++)
            B[1]++;
        for(j = b+1;j < strlen(A) - 1;j++)
            B[2]++;
        if((B[0] * B[1] != B[2]) || B[1] == 0)
            m++;
        if(m != 0 && i != N - 1){
            printf("NO\n");
            continue;
        }
        else if(m == 0)
            printf("YES\n");
        else
            printf("NO");       
    }
    return 0;
}