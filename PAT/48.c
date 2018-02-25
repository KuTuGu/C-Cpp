/*当B的长度小于A的长度时B需要前端补零
最后一个测试点当B长度小于A长度时，A元素为零需要做特殊处理*/
#include <stdio.h>
#include <string.h>
int main()
{
    int a,b,i = 0,n = 0;
    char A[101] = {'\0'},B[101] = {'\0'},C[101] = {'\0'};
    scanf("%s",A);
    scanf("%s",B);
    a = strlen(A);
    b = strlen(B);
    while(a >= 0 && b >= 0){
        a--,b--;
        if(a < 0 || b < 0)
            break;
        //奇数
        C[i++] = ((A[a] - '0') + (B[b] - '0')) % 13 + '0';//10，11，12化为':',';','<'
        a--,b--;
        if(a < 0 || b < 0)
            break;
        //偶数
        C[i] = B[b] - A[a] + '0';
        if(C[i] < '0')
            C[i] += 10;
        i++;
    }
    while(a < 0 && b >= 0){//如果B存在，直接保存
        C[i++] = B[b--];
    }
    while(a >= 0 && b < 0){//如果A存在，奇数直接保存，偶数不为0取10补数，为0则为0
        if(i % 2){//i奇数,该偶数
            if(A[a--] != '0')//不为0，取10补数
                C[i++] = ':' - A[a + 1] + '0';
            else//为0
                C[i++] = '0';
        }
        else{//i偶数,该奇数
            C[i++] = A[a--];
        }
    }
    for(i = strlen(C) - 1;i >= 0;i--){//转换输出
        if(C[i] == ':')
            C[i] = 'J';
        else if(C[i] == ';')
            C[i] = 'Q';
        else if(C[i] == '<')
            C[i] = 'K';
        if(C[i] == '0' && n == 0)
            continue;
        else{
            printf("%c",C[i]);
            n = 1;
        }
    }
    return 0;
}