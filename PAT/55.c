#include <stdio.h>
typedef struct a{
    int A;
    char B[9]; 
}Student;
int main()
{
    int N,K,i,j,m,min,min_i;
    int C[10000];
    scanf("%d %d",&N,&K);
    m = N / K;//计算行数
    Student a[N];
    for(i = 0;i < N;i++){//储存
        scanf("%s %d",a[i].B,&a[i].A);
    }
    do{//排序(小到大)
        min = 301;
        for(i = 0；i < N;i++){//查找最小值
            if(a[i].A < min && a[i].A >= 30){
                min = a[i].A;
                min_i = i;
            }
        }
        C[j] = min_i;
        j++;
        a[min_i].A = 0;
    }while(j != N);
    //......不会了
    return 0;
}

