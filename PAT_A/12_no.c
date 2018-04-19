//排名如果有并列，应该是1、1、3、4、5，而不是1、1、2、3、4
//是否四舍五入不影响结果，两种情况都可以
#include <stdio.h>
#include <stdlib.h>
struct Grade{
    int ID;
    int C,M,E,A;
}students[2001];  //学生结构体
int cmp(const void *a,const void *b);
int Order(int a,int b,int c,int d);
int main()
{
    int N,M,i,j,id,maxi; 
    int index[1000000] = {0};   //id数组，判断成绩是否存在
    int c[2001] = {0},m[2001] = {0},e[2001] = {0},a[2001] = {0};  //四种成绩
    int order[4][100] = {0};    //排序后数组
    char result[5] = {'E','M','C','A'}; 

    //储存输入
    scanf("%d%d",&N,&M);
    for(i = 1;i <= N;i++){
        scanf("%d%d%d%d",&students[i].ID,&students[i].C,&students[i].M,&students[i].E);
        students[i].A = (students[i].C + students[i].M + students[i].E) / 3;       //平均分四舍五入，不是测试点
        c[i] = students[i].C,m[i] = students[i].M,e[i] = students[i].E,a[i] = students[i].A;
        index[students[i].ID] = i;
    }

    //排序，储存在二维数组
    qsort(c + 1,N,sizeof(c[1]),cmp);
    for(i = 1;i <= N;i++){
        if(c[i] == c[i - 1])
            order[2][c[i]] = order[2][c[i - 1]];
        else
            order[2][c[i]] = i;
    }
    qsort(m + 1,N,sizeof(m[1]),cmp);
    for(i = 1;i <= N;i++){
        if(m[i] == m[i - 1])
            order[1][m[i]] = order[1][m[i - 1]];
        else
            order[1][m[i]] = i;
    }
    qsort(e + 1,N,sizeof(e[1]),cmp);
    for(i = 1;i <= N;i++){
        if(e[i] == e[i - 1])
            order[0][e[i]] = order[0][e[i - 1]];
        else
            order[0][e[i]] = i;
    }
    qsort(a + 1,N,sizeof(a[1]),cmp);
    for(i = 1;i <= N;i++){
        if(a[i] == a[i - 1])
            order[3][a[i]] = order[3][a[i - 1]];
        else
            order[3][a[i]] = i;
    }

    //输出
    for(i = 1;i <= M;i++){
        scanf("%d",&id);
        if(index[id]){
            maxi = Order(order[0][students[index[id]].E],order[1][students[index[id]].M],order[2][students[index[id]].C],order[3][students[index[id]].A]);     //注意顺序
            printf("%d %c\n",maxi / 10,result[maxi % 10]);
        }
        else
            printf("N/A\n");
    }
    return 0;
}
int cmp(const void *a,const void *b){    //注意降序排列
    return *(int *)b - *(int *)a; 
}
int Order(int a,int b,int c,int d){
    int max,index;
    max = (a < b) ? a : b;
    index = (max == a) ? 0 : 1;
    max = (max < c) ? max : c;
    index = (max == c) ? 2 : index;
    max = (max < d) ? max : d;
    index = (max == d) ? 3 : index;
    return max * 10 + index;
}

