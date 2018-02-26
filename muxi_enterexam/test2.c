//运行正确
#include <stdio.h>
void arr(char A[100]);//倒置数组元素
int main()
{
    int i;
    int C[100],D[100];
    char A[100]={'\0'},B[100]={'\0'},E[100];
    scanf("%s",A);
    scanf("%s",B);
    arr(A);
    arr(B);
    for(i=0;A[2*i]!='\0'||B[2*i]!='\0';i++){//对奇数位处理
        if(A[2*i]=='\0')
            A[2*i]='0';
        if(B[2*i]=='\0')
            B[2*i]='0';
        C[2*i]=((A[2*i]-'0')+(B[2*i]-'0'))%13;
        if(C[2*i]==10)//implicit declaration of function 'swicth' is invalid in C99
            A[2*i]='J';
        if(C[2*i]==11)
            A[2*i]='Q';
        if(C[2*i]==12)
            A[2*i]='K';
    }
    for(i=0;A[2*i+1]!='\0'||B[2*i+1]!='\0';i++){//对偶数位处理
        if(A[2*i+1]=='\0')
            A[2*i+1]='0';
        if(B[2*i+1]=='\0')
            B[2*i+1]='0';
        D[2*i+1]=(B[2*i+1]-'0')-(A[2*i+1]-'0');
        if(D[2*i+1]<0){
            D[2*i+1]+=10;
        }
    }
    for(i=0;A[i]!=0||B[i]!=0;i++){//构造加密数组
        if(i%2==0){
            if(C[i]>=10){
                E[i]=A[i];
            }
            else{
                E[i]=C[i]+48;
            }
        }
        else{
            E[i]=D[i]+48;
        }
    }
    arr(E);
    printf("%s",E);
    return 0;
}
void arr(char A[100]){//倒置数组元素
    int i=0,j=0;
    char temp;
    while(A[i]){
        j++;
        i++;
    }
    for(i=0;i<=j/2;i++){
        temp=A[i];
        A[i]=A[j-1-i];
        A[j-1-i]=temp;
    }
}
