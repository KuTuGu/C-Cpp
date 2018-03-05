#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void exchange(char *num,int length);   //数组颠倒位置
int equal(char *str1,char *str2,int length);   //比较两个数组是否相等
int cmp(const void *a,const void *b);   //升序排序函数
int main()
{
    int i,length,carry = 0;
    char num[21] = {'\0'},str[22] = {'\0'},copy[21] = {'\0'};
    scanf("%s",num);
    length = strlen(num);
    exchange(num,length);
    for(i = 0;i < length;i++){
        str[i] = ((num[i] - '0') * 2 + carry) % 10 + '0';
        carry = ((num[i] - '0') * 2 + carry) / 10;
    }
    if(carry)
        str[i] = carry + '0';
    exchange(str,strlen(str));
    if(strlen(str) != length)
        printf("No\n%s",str);
    else{
        strcpy(copy,str);
        if(equal(str,num,length))
            printf("Yes\n%s",copy);
        else
            printf("No\n%s",copy);
    }
    return 0;
}
void exchange(char *num,int length){
    int i;
    for(i = 0;i < length / 2;i++){
        char temp = num[i];
        num[i] = num[length - 1 - i];
        num[length - 1 - i] = temp;
    }
}
int cmp(const void *a,const void *b){
    return *(char *)a - *(char *)b;
}
int equal(char *str1,char *str2,int length){
    int i;
    qsort(str1,length,sizeof(str1[0]),cmp);
    qsort(str2,length,sizeof(str2[0]),cmp);
    for(i = 0;i < length;i++){
        if(str1[i] != str2[i])
            return 0;
    }
    return 1;
}