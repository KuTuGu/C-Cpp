#include <stdio.h>
int main()
{
    int i,j,a[1001]={0},b[1001]={0};
    char A[1000],B[1000];
    scanf("%s",A);
    scanf("%s",B);
    while(A)
        a[1000]++;
    while(B)
        b[1000]++;
    for(i=0;i<b[1000];i++){
        for(j=0;j<a[1000];j++){
            if(A[j]==B[i])
                b[i]++;
        }
    }
    for(i=0;i<b[1000];i++){
        if(b[i]==0)
            j++;
    }
    if(j==0)
        printf("Yes %d",a[1000]-b[1000]);
    else
        printf("No %d",j);
    return 0;
}
