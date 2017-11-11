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





