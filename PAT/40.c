#include <stdio.h>
void search(char *a,char b,char *c);//查找字符串中的指定字符,改变字符
int main()
{
    int i,j;
    int sum[2]={0};
    char A[100001]={'\0'};
    
}
void search(char *a,char b,char *c){
    int i,j = 0,m = 0;
    for(i = 0;i < b;i++){
        if(a[i] == 'P')
            j++;
        if(j > 0){
            c[m] = a[i];
            m++;
        }
    }
}