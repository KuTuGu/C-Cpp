#include<stdio.h>
#include<string.h>
int main()
{
    int M,i,j,n,q;
    int B[4]={0};//保证每种n只加一次
    char A[51]={'0'};
    scanf("%d",&M);
    for(i=0;i<M;i++){
        n=0;
        scanf("%s",A);
        if(strlen(A)<8||strlen(A)>16){
            printf("NO\n");
            continue;
        }
        for(q=0;q<4;q++)
            B[q]=0;
        for(j=0;j<strlen(A);j++){
            if(A[j]>='A'&&A[j]<='Z'&&B[0]==0){
                n++;
                B[0]++;
            }
            if(A[j]>='a'&&A[j]<='z'&&B[1]==0){
                n++;
                B[1]++;
            }
            if(A[j]>='0'&&A[j]<='9'&&B[2]==0){
                n++;
                B[2]++;
            }
            if((A[j]=='~'||A[j]=='!'||A[j]=='@'||A[j]=='#'||A[j]=='$'||A[j]=='%'||A[j]=='^')&&B[3]==0){
                n++;
                B[3]++;
            }
        }
        if(n<3){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0; 
}
