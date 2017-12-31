//第二个测试点
#include <stdio.h>
#include <string.h>
void itoa(int a, char *b, int n);
int main()
{
    int A, B, D;
    char a[11] = {'\0'};
    do{
        scanf("%d%d%d", &A, &B, &D);
    }while(D<=0 || D>10 || A<0 || B<0);
    itoa(A+B ,a ,D);
    printf("%s", a);
    return 0;     
}
void itoa(int a, char *b, int n){
    int i = 0;
    char temp;
    if(a == 0)
        b[0] = '0';
    while(a){
        b[i] = a%n + 48;
        a /= n;
        i++;
    }
    for(i = 0; i < strlen(b) / 2; i++){
        temp = b[i];
        b[i] = b[strlen(b)-1-i];
        b[strlen(b)-1-i] = temp; 
    }   
}