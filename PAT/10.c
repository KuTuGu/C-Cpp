//运行正确
#include <stdio.h>  
int main()  
{  
    int a,b,c=0;  
    while (scanf("%d%d", &a, &b)!=EOF){  
        if(a*b)  
        {  
           if(c)  
               printf(" ");  
           else
               c=1;  
           printf("%d %d",a*b,b-1);  
        }  
    }  
    if(c==0) 
         printf("0 0");  
    return 0;  
}  
