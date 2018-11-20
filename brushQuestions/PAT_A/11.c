#include <stdio.h>
int main()
{
    int i,maxi;
    float result = 1.0;
    char kinds[4] = {'W','T','L'};
    float A[3] = {0.0};
    for(i = 0;i < 3;i++){
        scanf("%f%f%f",&A[0],&A[1],&A[2]);
        maxi = A[0] > A[1] ? 0 : 1;
        maxi = A[maxi] > A[2] ? maxi : 2; 
        printf("%c ",kinds[maxi]);
        result *= A[maxi];
    }
    printf("%.2f",(result * 0.65 - 1) * 2);
    return 0;
}