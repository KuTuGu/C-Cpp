//运行正确
#include <stdio.h>
int main()
{
    int i=0,j=0,a=0,b=0,d=0;
    int c[1000]={0};
    char A[1000],B[1000];
    scanf("%s",A);
    scanf("%s",B);
    while(A[i]){
        a++;
        i++;
    }
    while(B[j]){
        b++;
        j++;
    }
    for(i=0;i<b;i++){    
        for(j=0;j<a;j++){
            if(A[j]==B[i]){    
                A[j]='10';//防止A中相同颜色的珠子数小于B
                c[i]++;
                break;//防止过度删除A中珠子（每次遇到相同，删除一个即可）
            }
        }
    }
    j=0;
    for(i=0;i<b;i++){
        if(c[i]==0)
            j++;
    }
    if(j==0)
        printf("Yes %d",a-b);
    else
        printf("No %d",j);
    return 0;
}
