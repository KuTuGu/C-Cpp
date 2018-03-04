#include <stdio.h>
#include <math.h>
int isprime(int a);
int main()
{
    int digit,radix,i;
    while(scanf("%d",&digit) != EOF){
        int len = 0, arr[100];
        if(digit < 0)
            break;
        scanf("%d",&radix);
        if(!isprime(digit)){
            printf("No\n");
            continue;
        }
        do{
            arr[len++] = digit % radix;
            digit /= radix;
        }while(digit);
        for(i = 0; i < len; i++)
            digit = digit * radix + arr[i];
        printf("%s",isprime(digit) ? "Yes\n" : "No\n");
    }
    return 0;
}
int isprime(int a){
    int i,num = 0;
    if(a <= 1)
        return 0;
    for(i = 2;i <= sqrt(a);i++){
        if(a % i == 0)
            return 0;
    }
    return 1;
}
