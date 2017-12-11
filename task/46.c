//emmmm，多种错误😂
#include<stdio.h>
int main()
{
    int N,i,j,m=0,min,bottom,M;
    int A[100][4]={0},B[100],C[100]={0};
    scanf("%d",&N);
    for(i=0;i<N;i++){
        B[i]=-1;
    }
    for(i=0;i<N;i++){
        scanf("%d",&A[i][0]);
        A[i][1]=A[i][0]/100;
        A[i][2]=A[i][0]/10%10;
        A[i][3]=A[i][0]%10;
        B[i]=A[i][1]+A[i][2]+A[i][3];
    }
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(B[j]==B[i]&&B[i]!=-1){
                B[j]=-1;
            }
        }
        if(B[i]!=-1)
            C[i]++;
        if(C[i]>0)
            m++;
    }
    printf("%d\n",m);
    for(i=0,M=0;i<N;i++){
        if(B[i]>=0){
            B[M]=B[i];
            M++;
        }
    }
    for(j=M;j<N;j++)
            B[j]=-1;
    for(i=0;i<N;i++){
        min=999;//每次重置
        for(j=0;j<N;j++){
            if(B[j]<min&&B[j]>=0){
                bottom=j;
                min=B[j];
            }
        }
        if(m!=1){
            printf("%d ",B[bottom]);
            m--;
        }
        else{
            printf("%d",B[bottom]);
            break;
        }
        B[bottom]=-1;
    }
    return 0;
}
