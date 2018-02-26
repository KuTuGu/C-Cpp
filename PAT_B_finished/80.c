//运行正确
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
    char name[21];
    int pre;
    int middle;
    int final;
    int total;
}s[10001];
int cmpname(const void *a,const void *b);
int cmptotal(const void *a,const void *b);
int main()
{
    int p,m,n,i,j,count = 0,score;
    char tmp[21];

    scanf("%d%d%d",&p,&m,&n);
    
    for(i = 0;i < p; i++){
        scanf("%s%d",tmp,&score);
        if(score >= 200){
            strcpy(s[count].name,tmp);
            s[count].pre = score;
            s[count].middle = -1;
            s[count].final = -1;
            s[count++].total = 0;
        }
    }
    qsort(s,count,sizeof(s[0]),cmpname); // 二分法数列必须有序
    for(i = 0; i < m; i++){
        scanf("%s%d",tmp,&score);
        int a = 0,b = count -1;
        while(a <= b){
            int c = (a + b) / 2;
            if(strcmp(s[c].name,tmp) == 0){
                s[c].middle = score;
                break;
            }
            else if(strcmp(s[c].name,tmp) < 0){
                a = c + 1;
            }
            else{
                b = c - 1;
            }
        }
    }
    for(i = 0; i < n; i++){
        scanf("%s%d",tmp,&score);
        int a = 0,b = count -1;
        while(a <= b){
            int c = (a + b) / 2;
            if(strcmp(s[c].name,tmp) == 0){
                s[c].final = score;
                if(s[c].final >= s[c].middle){
                    s[c].total = s[c].final;
                }
                else{
                    s[c].total = (s[c].middle * 0.4 + s[c].final * 0.6 + 0.5);
                }
                break;
            }
            else if(strcmp(s[c].name,tmp) < 0){
                a = c + 1;
            }
            else{
                b = c - 1;
            }
        }
    }
    qsort(s,count,sizeof(s[0]),cmptotal);
    for(i = 0; i < count; i++){
        if(s[i].total >= 60){
            printf("%s %d %d %d %d\n",s[i].name,s[i].pre,s[i].middle,s[i].final,s[i].total);
        }
    }
    return 0;
}
int cmpname(const void *a,const void *b)
{
    struct student s1 = *(struct student*)a;
    struct student s2 = *(struct student*)b;
    return strcmp(s1.name, s2.name);
}
int cmptotal(const void *a,const void *b)
{
    struct student s1 = *(struct student*)a;
    struct student s2 = *(struct student*)b;
    if(s1.total != s2.total){
        return s2.total - s1.total;
    }   
    return strcmp(s1.name, s2.name);
}