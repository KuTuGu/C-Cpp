#include <stdio.h>
int aver(int arr[],int n){
    int i,j,temp,a=0;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(arr[j]<arr[j+1]){
               	temp=arr[j];
           		arr[j]=arr[j+1];
           		arr[j+1]=temp;
            }
        }
    }
    for(j=1;j<n-1;j++)
        a+=arr[j];
    a=(float)a/(n-2);
    return a;
}
int main(){
    int i,n,j,b,arr[10][100];
    for(i=0;n>0;i++){
    	scanf("%d ",&n);
    	for(j=0;j<n;j++)
    		scanf("%d ",&arr[i][j]);
    	scanf("\n");
    }
    for(b=0;b<=i;b++)
        printf("%.2f\n",aver(arr[b],b));
    return 0;
}
