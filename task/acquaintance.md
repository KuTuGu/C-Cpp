## 新人任务24（'0'和'0')
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
## char数组  
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
## 报错
### 1.  
>#include <stdio.h>  
int main()  
{     
    int i;  
    char A[5];   
    for(i=0;i<5;i++){   
        printf("%d",A[i]);  
        if(A[i]='\0')  
            A[i]='0';  
         printf("%d",A[i]);  
    }  
    return 0;  
>}  
输入：12345    
输出：10000000000  
## 初始化  
定义变量时一定初始化，因为不同系统（甚至同一系统对于不同变量）初始化值不一定相同。会出现奇奇怪怪的错误（死都不知道怎么死的😢）
## 覆盖数组元素出现的问题    
### 错误代码    
>#include <stdio.h>  
int main()  
{  
    int N,i;  
    char B[21]={'\0'};   
    scanf("%d",&N);  
    for(i=0;i<N;i++){  
        scanf("%s",B);    
        printf("%c\n",B[10]);  
    }    
    return 0;  
>}  
输入      
coolman@gplt  
coolman@  
输出    
p    
p    
错误原因    
第二次输入的字符串没有完全覆盖第一次输入之后的数组，导致第二次继承了第一次的后一部分字符串（第二次字符串长度应大于第一次，或者再次将B全覆盖为'\0'）





