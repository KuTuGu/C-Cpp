#include <stdio.h>
int main(){
    int i,B[10]={1},A[10][100]={1},m=0,n=0,sum,j;
    for(i=1;B[i-1]>0;i++){
        scanf("%d ",&B[i]);
    	for(j=0;j<B[i];j++)
        	scanf("%d ",&A[i-1][j]);
    	scanf("\n");
    } 
    for(m=0;m<i-2;m++){
        sum=1;
   		for(j=0;j<B[m+1];j++){
    		if(A[m][j]%2!=0){
                sum*=A[m][j];
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
