//运行正确
#include <stdio.h>
int Plus(int x,int y,int a,int b,int A[10][1000]);
int main()
{
    int T,m,n,x,y,i,j,a,b,c=0,A[10][1000]={0},max;
    scanf("%d\n",&T);
    if(c<T){
        c++;
        scanf("%d %d %d %d\n",&m,&n,&x,&y);
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(j!=n-1)
                	scanf("%d ",&A[i][j]);
            	else
                    scanf("%d\n",&A[i][j]);
            }
        }
        max=Plus(x,y,0,0,A);
        for(a=0;a<m-x+1;a++){
            for(b=0;b<n-y+1;b++){
                if(Plus(x,y,a,b,A)>max)
                	max=Plus(x,y,a,b,A);
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
int Plus(int x,int y,int a,int b,int A[10][1000]){
    int plus=0,i,j;
    for(i=a;i<a+x;i++){
    	for(j=b;j<b+y;j++){
        	plus+=A[i][j];
        }
    }
    return plus;
}
