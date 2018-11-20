//运行正确
#include<stdio.h>
#include<math.h>
int calc(int A[1002][1002],int i,int j,int TOL);
int main()
{
    int M,N,TOL,i,j,num=0,a=1,b=1,m,n,c;
    int A[1002][1002]={0};//多加两行两列
    scanf("%d%d%d",&M,&N,&TOL); 
    for(i=1;i<N+1;i++){//像素
        for(j=1;j<M+1;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=1;i<N+1;i++){
        for(j=1;j<M+1;j++){
            if(calc(A,i,j,TOL)==1){
                c=0;
                for(m=1;m<N+1;m++){//有相同退出  
                    for(n=1;n<M+1;n++){
                        if(A[m][n]==A[i][j])
                            c++;
                    }
                }
                if(c==1){
                    num++;
                    a=i;
                    b=j;
                }
            }
        }
    }
    if(num==0)
        printf("Not Exist");
    else if(num==1)
        printf("(%d, %d): %d",b,a,A[a][b]);
    else 
        printf("Not Unique");
    return 0;
}
int calc(int A[1002][1002],int i,int j,int TOL){
    if((abs(A[i][j]-A[i-1][j-1])>TOL)&&(abs(A[i][j]-A[i-1][j])>TOL)&&(abs(A[i][j]-A[i-1][j+1])>TOL)&&(abs(A[i][j]-A[i][j-1])>TOL)&&(abs(A[i][j]-A[i][j+1])>TOL)&&(abs(A[i][j]-A[i+1][j-1])>TOL)&&(abs(A[i][j]-A[i+1][j])>TOL)&&(abs(A[i][j]-A[i+1][j+1])>TOL))
        return 1;
    else 
        return 0;
}