//运行正确
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
    int id;
    int scoreD;
    int scoreC;
    int sum;
    int rank;
}s[100001];
int cmp(const void *a,const void *b);//快速排序使用的比较函数
int main()
{
    int n,l,h,i,j,count = 0;
    int tmpid,tmpd,tmpc;
    scanf("%d%d%d",&n,&l,&h);
    for(i = 0; i < n; i++){
        scanf("%d%d%d",&tmpid,&tmpd,&tmpc);
        if(tmpd >= l && tmpc >= l){
            s[count].id = tmpid;
            s[count].scoreC = tmpc;
            s[count].scoreD = tmpd;
            s[count].sum = tmpc + tmpd;
            if(tmpd >= h && tmpc >= h){
                s[count].rank = 4;
            }
            else if(tmpd >= h){
                s[count].rank = 3;
            }
            else if(tmpd >= tmpc){
                s[count].rank = 2;
            }
            else{
                s[count].rank = 1;
            }
            count++;
        }
    }
    qsort(s,count,sizeof(s[0]),cmp);
    printf("%d\n",count);
    for(i = count - 1; i >= 0; i--){
        printf("%d %d %d\n",s[i].id,s[i].scoreD,s[i].scoreC);
    }
    return 0;
}
int cmp(const void *a,const void *b)
{

    struct student s1 = *(struct student*)a;
    struct student s2 = *(struct student*)b;
    if(s1.rank != s2.rank){
        return s1.rank - s2.rank;
    }
    else if(s1.sum != s2.sum){
        return s1.sum - s2.sum;
    }
    else if(s1.scoreD != s2.scoreD){
        return s1.scoreD - s2.scoreD;
    }
    else if(s1.id != s2.id){
        return s2.id - s1.id; // 准考证号升序 其他降序
    }
    else{
        return 0;
    }
}