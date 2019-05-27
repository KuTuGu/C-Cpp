//运行正确
#include <stdio.h>
int itoa(int a, char *b, int n);
int main()
{
    int A,B,C,D;
    char a[33] = {'\0'};
    do{
        scanf("%d%d%d", &A, &B, &D);
    }while(D<=0 || D>10 || A<0 || B<0);
    if(A + B == 0){
        printf("0");
    }
    else{
        C = itoa(A+B,a,D);
        while(C--)
            printf("%c",a[C]);
    }
    return 0;     
}
int itoa(int a, char *b, int n){
    int i = 0;
    if(a == 0)
        b[0] = '0';
    while(a){
        b[i] = a % n + 48;
        a /= n;
        i++;
    }
    return i;
}