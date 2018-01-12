//运行正确
#include <stdio.h>
#include <math.h>
int isprime(int a);//是否为素数
int main()
{
    int N,i,j,n,a,m,b;
    int A[10001] = {0};
    scanf("%d",&N);
    for(i = 1;i <= N;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&m);
    for(i = 0;i < m;i++){
        a = b = 0;
        scanf("%d",&n);
        for(j = 1;j <= N;j++){
            if(n == A[j]){
                a = j;
                A[j] = -A[j];
                break;
            }
            if(n == -A[j])
                b++;
        }
        if(a == 0 && b == 0)
            printf("%04d: Are you kidding?\n",n);
        else if(a == 0 && b == 1)
            printf("%04d: Checked\n",n);
        else if(a == 1)
            printf("%04d: Mystery Award\n",n);
        else if(isprime(a))
            printf("%04d: Minion\n",n);
        else
            printf("%04d: Chocolate\n",n); 
    }
    return 0;
}
int isprime(int a){
    int i,j = 0;
    if(a == 1)
        return 0;
    for(i = 2;i <= pow(a,1.0 / 2);i++){
        if(a % i == 0)
            j++;
    }
    if(j == 0)
        return 1;
    else 
        return 0;
}