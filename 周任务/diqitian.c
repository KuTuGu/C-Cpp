#include <stdio.h>
int ji(int A[m][n]){
    if(n>0)
        return A[m][n]*ji(A[m][n-1]);
    else
        return A[m][0];
}
int main(){
    int i,B[10]={1},A[10][100],m=0,n=0,sum;
    for(i=1;B[i-1]!=0;i++){
        scanf("%d ",&B[i]);
    	for(j=0;j<B[i];j++)
        	scanf("%d ",&A[i-1][j]);
    	scanf("\n");
    } 
    for(m=0;m<i-2;m++){
   		for(j=0;j<B[m+1];j++){
    		if(A[m][j]/2!=0){
                A[m][n]=A[m][j];
            	n++;
            }
        }
        printf("%d\n",sum=ji(A[m][n]));
    }
    return 0;
}
