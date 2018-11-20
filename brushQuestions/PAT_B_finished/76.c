//运行正确
#include <stdio.h>
int main()
{
    int N,i,j,sum = 0;
    char A[17] = {'\0'};
    scanf("%d\n",&N);
    for(i = 0;i < N;i++){
        fgets(A,17,stdin);
        for(j = 0;j < 15;j++){
            if(A[j] == 'T'){
                printf("%d",A[j - 2] - 'A' +1);
                break;
            }
        }
    }
    return 0;
}