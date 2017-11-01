#include <stdio.h>
int main()
{
    int T,i,A[1000];
    char j;
    scanf("%d\n",&T);
    for(i=0;i<T;i++){
        scanf("%d ",&A[i]);
    }
    for(i=0;i<T;i++){
        printf("%c",j=A[i]);
    }
    return 0;
}
