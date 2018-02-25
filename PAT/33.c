//运行正确
#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,a,m;
    char b;
    char A[68] = {'\0'},B[100001] = {'\0'};
    fgets(A,68,stdin);//有可能为空，所以不能用scanf
    a = strlen(A);//多次在for中使用strlen会超时
    while((b = getchar()) != '\n'){
        m = 0;
        for(j = 0;j < a;j++){
            if(A[j] == '+' && b >= 'A' && b <= 'Z')//大写字母全无法打印
                m++;
            if(A[j] == b || (A[j] == (b - 32) && b >= 'a' && b <= 'z'))//与大写字母对应的小写字母也无法打印，注意b的范围，有可能不是字母但也可以相差32
                m++;
        }
        if(m == 0)
            printf("%c",b);
    }
    return 0;
}