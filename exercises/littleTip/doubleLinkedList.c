/*
将两个已经按从小到大顺序排好序的链表 l1, l2 合并成一个新的排好序的链表 l3
*/
#include <stdio.h>
#include <stdlib.h>
/*
双向链表
头指针headPointer提供两种方向查询
普通节点ordinaryNode提供节点信息
*/
struct ordinaryNode{
    int data;
    struct ordinaryNode *pre;
    struct ordinaryNode *next;
}T;

/*输入链表节点信息*/
void input();
/*排序并输出链表*/
void output();

int main()
{
    input();
    output();

    return 0;
}

void input(){
    /*p用于循环，preNode记录上一个节点*/
    struct ordinaryNode *p = (struct ordinaryNode *)malloc(sizeof(struct ordinaryNode)), 
                        *preNode = &T;
    puts("请依次按从小到大的顺序输入l1、l2链表数据(空格、换行分割)：");

    while((scanf("%d", &p->data))){
        preNode->next = p;
        p->pre = preNode;

        preNode = p;
        /*生成新节点，防止改变之前数据*/
        p = (struct ordinaryNode *)malloc(sizeof(struct ordinaryNode));
        
        /*退出*/
        char c = getchar();
        if(c == '\n'){
            p->next = NULL;
            break;
        }
    }

    /*读取l2，插入到l1*/
    preNode = &T;
    while((scanf("%d", &p->data))){
        while((preNode = preNode->next)){
            /*p插入到preNode和preNode->next之间*/
            if((preNode && !(preNode->data > p->data)) && ((preNode->next && (preNode->next->data > p->data)) || (!preNode->next))){
                if(preNode->next)
                    preNode->next->pre = p;
                p->next = preNode->next;
                preNode->next = p;
                p->pre = preNode;
                
                break;
            }
            /*有可能小于头节点*/
            else if(p->data < T.next->data){
                T.next->pre = p;
                p->next = T.next;
                T.next = p;
                p->pre = &T;

                /*由于链表递增排列，只需在该情况下将preNode改为T*/
                preNode = &T;
                break;
            }
        }
        
        
        /*生成新节点，防止改变之前数据*/
        p = (struct ordinaryNode *)malloc(sizeof(struct ordinaryNode));
        
        /*退出*/
        char c = getchar();
        if(c == '\n'){
            break;
        }
    }

    /*边界标记处理*/
    while(preNode){
        if(!preNode->next){
            /*c语言无法重载运算符，无法比较结构体从而判断循环终止，用NULL作为标记*/
            // preNode->next = &T;
            T.pre = preNode;
            T.next->pre = NULL;
            T.pre->next = NULL;
            break;
        }
        preNode = preNode->next;
    }
}

void output(){
    struct ordinaryNode *p = T.next;

    while(1){
        // if(*p == T){
        //     printf("%d\n",p->data);
        //     break;
        // }
        if(!p->next){
            printf("%d\n",p->data);
            break;
        }
        printf("%d ",p->data);
        p = p->next;
    }
}
