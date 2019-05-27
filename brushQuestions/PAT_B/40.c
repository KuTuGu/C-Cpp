#include<stdio.h>
#include<string.h>
int main()
{
    int lena,i;
    long long countt = 0,counta = 0,countp = 0;
    char a[110000];
    scanf("%s",a);
    lena = strlen(a);
    for(i = lena - 1; i >= 0; i--){
        if(a[i] == 'T')
            countt++;
        if(a[i] == 'A')
            counta += countt;
        if(a[i] == 'P')
            countp += counta;
    }
    countp %= 1000000007;
    printf("%d",countp);
    return 0;
}