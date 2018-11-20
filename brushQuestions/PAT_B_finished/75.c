#include <stdio.h>
int main()
{
    int data[100000] = {0}, next[100000] = {0},
        firstaddr, addr, lastaddr = -1, N, K;
    
    /* Read */
    scanf("%d %d %d", &firstaddr, &N, &K);
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &addr);
        scanf("%d %d", data + addr, next + addr);
    }
    
    /* Scan three times */
    for(int i = 0; i < 3; i++)
    {
        /* Scan along the linked list */
        for(addr = firstaddr; addr != -1; addr = next[addr])
        {
            /* If the number fits the condition */
            if((i == 0 && data[addr] < 0)
            || (i == 1 && 0 <= data[addr] && data[addr] <= K)
            || (i == 2 && data[addr] > K)){
                /* Print */
                if(lastaddr != -1) 
                    printf(" %05d\n", addr);
                printf("%05d %d", addr, data[addr]);
                lastaddr = addr;
            }
        }
    }
    printf(" -1");
    return 0;
}
//链接：https://www.jianshu.com/p/a8f21f7092f4



//部分正确
/*将结点用list[100000]保存
list为node类型，node中保存结点的值value和它的next地址
list的下标就是结点的地址
*/
/*#include <stdio.h>
struct node{
    int data;
    int next;
}list[100000];
int main()
{
    int start,num,flag,index,i,j;
    int Data[3][100000] = {0},Num[3] = {0};
    scanf("%d%d%d",&start,&num,&flag);
    for(i = 0;i < num;i++){
        scanf("%d",&index);
        scanf("%d%d", &list[index].data,&list[index].next);
    }
    index = start;
    while(index != -1){
        int data = list[index].data;
        if(data < 0)
            Data[0][Num[0]++] = index;
        else if(data >= 0 && data <= flag)
            Data[1][Num[1]++] = index;
        else
            Data[2][Num[2]++] = index;
        index = list[index].next;
    }
    printf("%05d %d ",Data[0][0],list[Data[0][0]].data);
    for (i = 0;i < 3;i++){ 
        for(j = (i == 0) ? 1 : 0;j < Num[i];j++)
            printf("%05d\n%05d %d ",Data[i][j],Data[i][j],list[Data[i][j]].data);
    }
    printf("-1");
    return 0;
}*/
