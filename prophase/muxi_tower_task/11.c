#include <stdio.h>
int arr(int A[100000],int a,int b);
int main()
{
    int n,m,i,a,A[100000];
    do{
        A[100000]=0;
    	scanf("%d %d\n",&n,&m);
    	for(i=0;i<n;i++){
        	scanf("%d ",&A[i]);
    	}
    	scanf("\n");
        for(a=0;a<m;a++){
            printf("%d ",arr(A,n,a));
        }
        printf("\n");     
    }while(n!=0||m!=0);
    return 0;
}
int arr(int A[100000],int a,int b){
	int i,j,temp;
    for(i=0;i<=a;i++){
        for(j=0;j<a-1;j++){
        	if(A[j+1]>A[j]){
                temp=A[j+1];
            	A[j+1]=A[j];
                A[j]=temp;
            }
        }
    }
    return A[b];
} 
