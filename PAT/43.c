//运行正确
#include <stdio.h>
int main()
{
    int i,j,sum = 0,m = 0;
    int C[6] = {0};
    char A[10001] = {'\0'},B[7]="PATest";
    scanf("%s",A);
    for(j = 0;j < 6;j++){
        for(i = 0;A[i] != '\0';i++){
            if(A[i] == B[j]){
                C[j]++;
            }
        }
        sum += C[j];
    }
    for(j = 0;m < sum;j++){
        i = j % 6;
        if(C[i] > 0){
            printf("%c",B[i]);
            C[i]--;
            m++;//只有有输出的时候m再自增
        }
    }
    return 0;
}