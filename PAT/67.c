#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int N;
    char c, correct[21], user[21];
    scanf("%s %d", correct, &N);
    while(getchar() != '\n');
    while(N--)
    {
        scanf("%s", user);   
        c = ungetc(getchar(), stdin);
        if(!strcmp(user, "#") && c == '\n')
        {
            break;
        }
        else if(!strcmp(correct, user) && c == '\n')
        {
            puts("Welcome in");
            break;
        }
        else
        {
            printf("Wrong password: %s", user);
            while(putchar(getchar()) != '\n') ;//上面只读取了20个字符，但输入长度不一定小于20
            if(!N)  puts("Account locked");
        }
    }
    return 0;
}
//链接：https://www.jianshu.com/p/e368054c112a


/*//部分正确
#include <stdio.h>
#include <string.h>
int main()
{
    int N,i,j,m;
    char A[21] = {'\0'},B[21];
    scanf("%s%d",A,&N);
    for(i = 0;i < N;i++){
        for(j = 0;j < 21;j++){
            B[j] = '\0';
        }
        m = 0;
        scanf("%s",B);
        if(!strcmp(A,B)){
            printf("Welcome in");
            m = 1;
            break;
        }
        else{
            printf("Wrong password: %s",B);  
            while(putchar(getchar()) != '\n') ;//上面只读取了20个字符，但输入长度不一定小于20
        }
    }
    while(fgets(A,21,stdin) != NULL){
        if(!strcmp(A,"#\n"))
            break;
    }
    if(!m)
        printf("Account locked");
    return 0;
}*/