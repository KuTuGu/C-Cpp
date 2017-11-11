## 新人任务24  
### 代码1:
>#include <stdio.h>    
int main()  
{  
    int i;   
    char s[100];  
    scanf("%s",&s);  
    while(s[i]){//此处表达的是s[i]!='\0',不是s[i]!='0',条件为s[i]和s[i]!='0',输出不同。 
        printf("%d\n",s[i]);  
        i++;  
    }  
    return 0;    
>}    
### 代码2:  
>#include <stdio.h>  
int main()  
{  
    int i;  
    char a;  
    do{  
        a=getchar();  
        printf("%d\n",a);    
    }while(a!='0');//这里只有这个可以使用而a!(a!='\0‘）不能使用（因为a不是字符串没有'\0'结尾）  
    return 0;  
>}  
## char  
### char A[3];  
1.scanf("%s",A);//没有&，可直接将一串字符（字母，数字）以字符串形式存入A  
2.scanf("%c",&A[number]);//储存单个字符  
3.printf("%s",A);//直接输出A中的字符串
4.scanf("%c",A[number]);//输出单个字符  
### char \*A[3];
1.char \*A[3]={"abc","bca","cba"};//初始化时，可储存多个字符串  
2.printf("%s",A[number]);//既然是字符串输出单个元素时，也要用%s
## 强制转换  
(int)'\0'=0;  
(int)'0'=48;  






