#include <stdio.h>
typedef struct{
        char adress[5];
        int date;
        char aftadress[5];
}list;
int main()
{
    int N,K,i,j,num,NUM,freq=0,m;
    int C[100000] = {0};
    char A[6] = {'\0'};
    char *a,*b;
    scanf("%s%d%d",A,&N,&K);
    a=A;
    list B[N]; 
    for(i = 0;i < N;i++){
        scanf("%s%d%s",B[i].adress,&B[i].date,B[i].aftadress);
    }
    while((N -= K) >= 0){//循环反转，一次输出一次
        NUM = 0;
        freq++;
        while(NUM != K){//找该次循环的所有结点
            for(i = 0;i < N+freq*K;i++){//找出结点
                num = 0;
                for(j = 0;j < 5;j++){
                    if(a[j] == B[i].adress[j]){
                        num++;
                    }
                }
                if(num == 5)
                    break;
            }
            C[NUM] = i;//记录结点
            NUM++;
            a = B[i].aftadress;//指向下一个结点 
        }
        while(NUM--){
            if(NUM!=0){
                printf("%s %d %s\n",B[C[NUM]].adress,B[C[NUM]].date,B[C[NUM-1]].adress);
            }
            else if(NUM==0&&N!=0){
                printf("%s %d %s\n",B[C[NUM]].adress,B[C[NUM]].date,B[freq*K].adress);
                a = B[freq*K].adress;//指向下一个结点
            }
            else{
                printf("%s %d -1\n",B[C[NUM]].adress,B[C[NUM]].date);
            }
        }
    }
    for(i = 0;i < (N+K)%K;i++){//找剩余的所有结点
        for(m = 0;m < N+K+freq*K;m++){
            num = 0;
            for(j = 0;j < 5;j++){
                if(a[j] == B[m].adress[j]){
                    num++;
                }
            }
            if(num == 5)
                break;
        }
        C[NUM] = m;//记录结点
        printf("%s %d %s\n",B[C[NUM]].adress,B[C[NUM]].date,B[C[NUM]].aftadress);
        a = B[C[NUM]].aftadress;
        if(a[0] == '-')
            break;
    }
    return 0;
}