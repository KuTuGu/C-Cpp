//运行正确
#include<stdio.h>
int main()
{
    int T,K,i,n1,b,t,n2;
    scanf("%d%d",&T,&K);
    for(i=0;i<K;i++){
        scanf("%d%d%d%d",&n1,&b,&t,&n2);
        if(T==0){
            printf("Game Over.\n");
            break;
        }
        else if(t>T){
            printf("Not enough tokens.  Total = %d.\n",T);
            continue;
        }
        if((n2>n1&&b==1)||(n2<n1&&b==0)){
            T+=t;
            printf("Win %d!  Total = %d.\n",t,T);
        }
        if((n2>n1&&b==0)||(n2<n1&&b==1)){
            T-=t;
            printf("Lose %d.  Total = %d.\n",t,T);
        }
    }
    return 0;
}
