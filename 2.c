#include <stdio.h>
void arr(char A[100]);//倒置数组元素
int main()
{
    int i,j,a,b;
    int C[100],D[100];
    char A[100],B[100],E[100];
    scanf("%s",A);
    scanf("%s",B);
    arr(A);
    arr(B);
    for(i=0;i%2==0&&(A[i]!='\0'||B[i]!='0');i++){//对奇数位处理
        C[i]=((A[i]-'0')+(B[i]-'0'))%13;
        if(C[i]==10)//implicit declaration of function 'swicth' is invalid in C99
            A[i]='J';
        if(C[i]==11)
            A[i]='Q';
        if(C[i]==12)
            A[i]='K';
    }
    for(j=0;j%2!=0&&(A[j]!='\0'||B[j]!='0');j++){//对偶数位处理
        D[j]=(B[j]-'0')-(A[j]-'0');
        if(D[j]<0){
            D[j]+=10;
        }
    }
    for(i=0;A[i]!=0||B[i]!=0;i++){//构造加密数组
        if(i%2==0){
            if(C[i]>10){
                E[i]=A[i];
            }
            else{
                E[i]=C[i];
            }
        }
        else{
            E[i]=D[i];
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