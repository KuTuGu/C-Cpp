//运行正确
#include <stdio.h>
int main()
{
    int N,i,j,m,z,M = 0;
    int B[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char A[19] = {'\0'},C[12] = {'1','0','X','9','8','7','6','5','4','3','2'};
    scanf("%d",&N);
    for(i = 0;i < N;i++){
        m = 0;
        scanf("%s",A);
        z = 0;
        for(j = 0;j < 17;j++){
            if(!(A[j] >= '0' && A[j] <= '9')){
                m++;
                break;
            }
            z += (A[j] - '0') * B[j];
        }
        z %= 11;
        if(A[17] != C[z])
            m++;
        if(m != 0){
            printf("%s\n",A);
            M++;
            continue;
        }
    }
    if(M == 0)
        printf("All passed");
    return 0;
}
