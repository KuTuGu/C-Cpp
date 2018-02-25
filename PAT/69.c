/*
用了count记录以中奖的人数，r记录因重复而跳过的人数
得到奖品的序号应该是 S + count * N + r
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000][21] = {{0}}, line[21];
    int M, N, S, m, count = 0, r = 0;
    
    scanf("%d %d %d", &M, &N, &S); S--;
    for(m = 0; m < M; m++)
    {
        scanf("%s", line);
        if(m == S + count * N + r){
            int flag = 1;
            for(int i = 0; i < count && flag; i++){
                if(!strcmp(s[i], line)){
                    flag = 0,r++;
                    break;
                }
            }
            if(flag)
                strcpy(s[count++],line);
        }
    }
    for(int i = 0; i < count; i++) 
        printf("%s\n", s[i]);
    if(!count) 
        printf("Keep going...");
    return 0;
}
//链接：https://www.jianshu.com/p/0405ee551d8f