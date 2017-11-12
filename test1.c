//一个问题:如何完成“当读到一行只有单个#字符时，输入结束，并且这一行不是用户的输入。”
#include <stdio.h>
int main()
{
    int N,i,j,m=0;
    char A[21]={'\0'},B[21];
    char C[2];
    char a;
    scanf("%s",A);
    scanf("%d",&N);
    for(i=0;i<N;i++){
        for(j=0;j<21;j++){
            B[j]='\0';
        }
        m=0;
        scanf("%s",B);
        for(j=0;j<20;j++){
            if(A[j]!=B[j])
                break;
            m++;
        }
        if(m==20&&(A[19]==B[19])){
            printf("Welcome in");
            m=100;
            break;
        }
        else{
            printf("Wrong password: %s\n",B); 
        }
    }
    if(m!=100)
        printf("Account locked");
    return 0;
}
