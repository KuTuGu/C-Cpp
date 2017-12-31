//第四个测试点
#include <stdio.h>
int main()
{
    int i,m,n,num=0,a=0;
    char A[10000] = {'\0'};
    scanf("%s",A);
    for(i = 0;A[i] != '\0';i++){
        if(A[i] == '.')
            m = i;
        else if(A[i] == 'E')
            n = i;
    }
    for(i = n+2;A[i] != '\0';i++){//收集指数
        a = A[i]-'0';
        num += a;
        if(A[i+1] != '\0')
            num *= 10;
    }
    if(A[n+1] == '-'){
        if(A[0] == '-')
            printf("-");
        printf("0.");
        while(--num){
            printf("0");
        }
        printf("%d",A[1] - '0');
        for(i = m+1;i < n;i++)
            printf("%d",A[i]-'0');
    }
    else{
        num -= (n-m-1);
        if(A[0] == '-')
            printf("-");
        printf("%d",A[1] - '0');
        if(num<0){
            for(i = m+1;i <= m+num;i++){
                printf("%d",A[i]-'0');
            }
            if(num < 0)
                printf(".");
            for(i = m+num+1;i <= n;i++){
                printf("%d",A[i]-'0');
            }
        }
        else{
            for(i = m+1;i < n;i++){
                printf("%d",A[i]-'0');
            }
            while(num--){
                printf("0");
            }
        }
    }
    return 0;
}
