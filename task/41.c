//运行正确
#include<stdio.h>
#include<ctype.h>
#include<string.h>
void strlwr(char a[1001]);
int main()
{
    char a[1001];
    int b[30]={0},max=0,i,letter;
    gets(a);
    strlwr(a);
    printf("%s",a);
    for(i=0;i<strlen(a);i++){
        if(a[i]>='a'&&a[i]<='z')
            b[a[i]-'a']++;
    }
    for(i=0;i<26;i++){
       if(b[i]>max)
       {
            max=b[i];
            letter=i;
       }    
    }
    printf("%c %d",letter+'a',max);
    return 0;
}
void strlwr(char a[1001]){
    int i = 0;
    while(a[i])
    {
        a[i] =tolower(a[i]);
        i++;
    }
}
