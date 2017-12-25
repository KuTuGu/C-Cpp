#include <stdio.h>
void min_max(int *a,int *c,int d){
    int i,min=1000000000,max=0;
    for(i = 0;i < d;i++){
        if(c[i] < min && c[i] != 0){
            min = c[i];
            a[0] = i;
        }
        if(c[i] > max){
            max = c[i];
            a[1] = i;
        }
    }
}
int main(){
    int B[2]={0};
    int A[10] = {2,3,20,4,5,1,6,7,8,9};
    min_max(B,A,10);
    printf("%d...\n%d...\n",B[0],B[1]);
    return 0;
}
