//第三个测试点用于测试所有输入都是无效输入的情况下代码是否正确运行
#include<stdio.h>
#include<stdlib.h>
long filter(char *A);//生日转化为数字比较大小和判断符合
int main()
{
    int N,i,m,j = 0,E,F;//第一个的生日，遍历取最年长和最年轻,E取大，F取小
    char A[6],B[11];//将名字和生日储存在字符数组中
    char C[6] = {'0'},D[6] = {'0'};//C指向最年轻，D指向最年长
    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%s%s",&A,&B);
        if(filter(B) > 2014009006 || filter(B) < 1814009006)
            continue;
        j++;
        if(j == 1){
            for(m = 0;m < 6;m++){
                D[m] = A[m];
                C[m] = A[m];//全设为第一个的值，遍历
            }
            E = filter(B);
            F = filter(B);
        }
        if(filter(B) > E){
            E = filter(B);
            for(m = 0;m < 6;m++)
                C[m] = A[m];
        }
        if(filter(B) < F){
            F = filter(B);
            for(m = 0;m < 6;m++)
                D[m] = A[m];//注意指针会变，D指向A后，A还是会变的，不能用指针
        }
    }
    if(j == 0)
        printf("0");
    else
        printf("%d %s %s",j,D,C);
    return 0;
}
long filter(char *A){
    int i;
    for(i = 0;i < 11;i++){
        if(A[i] == '/')//注意是字符不是字符串
            A[i] = '0';
    }
    return atol(A);
}
