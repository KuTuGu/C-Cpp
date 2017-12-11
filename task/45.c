//运行正确
#include<stdio.h>
int main()
{
    int i;
    int B[3]={0};
    char A[101]={'0'};
    gets(A);
    while(A[0]!='E'){
        for(i=0;i<100;i++){
            if(A[i]=='Z')
                B[0]++;
            if(A[i]=='O')
                B[1]++;
            if(A[i]=='J')
                B[2]++;
        }
        for(;B[0]>0||B[1]>0||B[2]>0;){
            if(B[0]>0){
                printf("Z");
                B[0]--;
            }
            if(B[1]>0){
                printf("O");
                B[1]--;
            }
            if(B[2]>0){
                printf("J");
                B[2]--;
            }
        }
        for(i=0;i<100;i++){
            A[i]='0';
        }
        gets(A);
        if(A[0]=='E'&&A[1]=='0')
            break;
        else
            printf("\n");
    }
    return 0;
}
