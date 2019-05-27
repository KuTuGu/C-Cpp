//双向映射存储ID会节省很多代码
#include <stdio.h>
int main()
{
    int couple[100001] = {0}, N, ID1, ID2, M, count = 0;   
    /* every pair of 'index' and 'value' are a couple.
     * record ID + 1 to avoid '00000' conflict with 0 */
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d %d",&ID1,&ID2); 
        ID1++,ID2++;
        couple[ID1] = ID2;
        couple[ID2] = ID1;
    }
    
    /* Record those who come. If one has a mate then set 0(which means signed in), 
     * else(means he is not even in the 'couple-list') set -1(which means bachelor) */
    scanf("%d", &M);
    for(int i = 0; i < M; i++)
    {
        scanf("%d", &ID1); ID1++;
        if(couple[ID1]) 
            couple[ID1] = 0;
        else{
            couple[ID1] = -1;
            count++;
        }
    }
    
    /* If couple[ID] is positive but couple[couple[ID]] is zero, 
     * it means 'ID' didn't come but his/her mate did(signed in). */
    for(int i = 0; i < 100001; i++){
        if(couple[i] > 0 && !couple[couple[i]]){   //couple[i]不存在，couple[couple[i]]存在时
            couple[couple[i]] = -1;
            count++;
        }
    } 
    /* Those whose value is -1 is a bachelor or came alone */
    printf("%d\n", count);
    for(int i = 0; i < 100001; i++) if(couple[i] == -1)
        printf("%05d%c", i - 1, --count ? ' ' : '\0');
    
    return 0;
}
//链接：https://www.jianshu.com/p/93f41de916da