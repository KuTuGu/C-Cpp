#include <stdio.h>
#include <math.h>
int main(){
    int i,n=1,j,a,m,A[10][100],B[10]={1},temp;
    for(i=1;B[i-1]!=0;i++){
    	scanf("%d ",&B[i]);
    	for(j=0;j<B[i];j++){
        	scanf("%d ",&A[i-1][j]);
        }
        scanf("\n");
    }
    for(m=0;m<i-2;m++){
        for(a=0;a<B[m+1];a++){
        	for(j=0;j<B[m+1]-1;j++){
            	if(abs(A[m][j])<abs(A[m][j+1])){
                	temp=A[m][j+1];
            		A[m][j+1]=A[m][j];
            		A[m][j]=temp;
                }
            }
        }
        for(j=0;j<B[m+1];j++)
            printf("%d ",A[m][j]);
        putchar('\n');
    }
    return 0;
}
