//运行正确
#include<stdio.h>
int main()
{
    int N,i,max = 0,j,m,a;
    int A[100001] = {0};//不超过10^5，但A[m] += a已确定m下标为学校编号，所以A[100000]存在
    scanf("%d",&N);
    for(i = 0;i < N;i++){
      	scanf("%d",&m);
        scanf("%d",&a);
        A[m] += a;
    }
    for(i = 0;i <= N;i++){ //可能取到N
      	if(A[i] > max){
            max = A[i];
            j = i;
        }
    }
    printf("%d %d",j,max);
    return 0;
}
