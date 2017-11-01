#include <stdio.h>
int main()
{
	int n,i,A[100],min,temp,b;
    do{
    	scanf("%d ",&n);
    	for(i=0;i<n;i++){
            scanf("%d ",&A[i]);
        }
        scanf("\n");
        min=A[0];
        for(i=0;i<n;i++){
            if(A[i]<A[0]){
                min=A[i];
                b=i;
            }
        }
        temp=A[0];
        A[0]=A[b];
        A[b]=temp;
        for(i=0;i<n;i++){
            printf("%d ",A[i]);
        }
        printf("\n");
    }while(n!=0);
    return 0;
}
