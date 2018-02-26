//时间超时
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void strlwr(char a[1001]);
int main()
{
    int i,j,m=0,n=0,max;
    int A[1001]={0};//对应字母累计重复次数
    char p[1001]={'0'};
    gets(p);
    strlwr(p);
    for(i=0;i<strlen(p);i++){
        if(p[i]=='a')//查找‘a’次数
            A[m]++;
    }
    max=A[0];//找数目最大值
    for(i=0;i<strlen(p);i++){//循环一整次
        m++;
        for(j=0;j<strlen(p);j++){//循环第一个不为‘a’的元素
            if(p[j]!='a'){
                p[m]=p[j];//第一个元素与下标m绑定
                A[m]++; 
            }
            for(n=j+1;n<strlen(p);n++){
                if(p[n]==p[m]){
                    p[n]='a';//将第一个以后重复的元素重置
                    A[m]++;
                }
            }
        }
        if(A[i]>max)
            max=i;
    }
    printf("%c %d",p[max],A[max]);
    return 0; 
}
void strlwr(char a[1001]){
    int i;
    for(i=0;a[i]!='\0';i++){
        if(a[i]>='A'&&a[i]<='Z')//表示是大写字母 
            a[i]+=32;
    }
}
