#include <stdio.h>
int main(){
    int m,n,i,j,A[50][5],B[50]={0},C[5]={0},d=0;
    scanf("%d %d\n",&m,&n);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            scanf("%d ",&A[i][j]);
        scanf("\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
           B[i]+=A[i][j];
        printf("%.2f ",(float)B[i]/m);
    }
    printf("\n");
    for(j=0;j<m;j++){
        for(i=0;i<n;i++)
            C[j]+=A[i][j];
        printf("%.2f ",(float)C[j]/n);
    }
    printf("\n");
        for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(A[i][j]<(float)C[j]/n)
                break;
            else
                d++;
        }
    }
    printf("%d",d/m);
    return 0;
}
