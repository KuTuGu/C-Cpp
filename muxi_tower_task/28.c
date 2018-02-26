//运行正确
#include<stdio.h>
int main(){
    int n,i,j,m;
    char A[100];
    scanf("%d\n",&n);
    for(m=0;m<n;m++){
        for(i=0;i<100;i++){
            A[i]='\0';
        }
        j=0;
        gets(A);
        for(i=0;i<100;i++){
            if(A[i]>47&&A[i]<58)
                j++;
        }
        printf("%d\n",j);
    }
    return 0;
}
