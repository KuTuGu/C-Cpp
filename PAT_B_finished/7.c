//运行正确
#include <stdio.h>
#include <math.h>
int main()
{
    int N,i,j,m,n=0;
    scanf("%d",&N);
    for(i=3;i<=N-2;i++){//注意最大值为N-2
        m=0;
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0)
                m++;
        }
        if(m==0){
            for(j=2;j<=sqrt(i+2);j++){
                if((i+2)%j==0)
                    m++;
            }
            if(m==0)
                n++;
        }
    }
    printf("%d",n);
    return 0;
}

