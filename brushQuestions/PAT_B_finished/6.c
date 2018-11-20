//运行正确
#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n/100;i++) {
        printf("B");
    }
    for(i=0;i<n/10%10;i++){
        printf("S");
    }
    for(i=0;i<n%10;i++){
        printf("%d", i + 1);
    }
    return 0;
}
