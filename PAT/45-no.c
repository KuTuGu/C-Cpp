//运行超时
//改进思路：如果有一个数使得另一个数不成立，那么这个数也一定不成立，不用建立两个数组，直接在第一个数组里面'删去'
#include <stdio.h>
int main()
{
    int N,i,j,m,n = 0;
    int A[100000] = {0},B[100000] = {0};
    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%d",&A[i]);
    }
    //找主元
    for(i = 0;i < N;i++){
        for(j = i + 1;j < N;j++){
            if(A[j] < A[i])
                A[j] = 1000000001;//如果直接设为最大值加1，当遍历到该数时，会有问题，且改动后有可能使得不是主元的数变成主元
        }
        for(j = i - 1;j >= 0;j--){
            if(A[j] > A[i])
                m++;
        }
    }
    j = n;
    printf("%d\n",j);
    //输出主元
    do{
        m = 1000000001;
        j--;
        for(i = 0;i < n;i++){
            //找最小值
            if(B[i] < m){
                m = B[i];
                N = i; 
            }
        }
        B[N] = 1000000001;
        if(j != 0)
            printf("%d ",m);
        else
            printf("%d",m);      
    }while(j != 0);
    return 0;
}