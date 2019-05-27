#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char name[9];
    int height;
}Student;
int cmp(const void *a, const void *b);//降序排序
void printrow(Student s[], int num);
int main()
{
    int N,K;
    Student students[10000],*p = students;
    scanf("%d%d",&N,&K);
    for(int i = 0;i < N;i++){
        scanf("%s%d",students[i].name,&students[i].height);
    }
    qsort(p,N,sizeof(Student),cmp);
    printrow(students,N - N / K * (K - 1));
    for(p += N - N / K * (K - 1); p < students + N; p += N / K)
        printrow(p,N / K);
    return 0;
}
void printrow(Student *s, int num)
{
    for(int i = num / 2 * 2 - 1; i > 0; i -= 2)     /* on the left */
        printf("%s ", s[i].name);
    for(int i = 0; i < num; i += 2)                 /* on the right */
        printf("%s%c", s[i].name, i + 2 < num ? ' ' : '\n');
}
int cmp(const void *a, const void *b)
{
    Student s1 = *(Student*)a;
    Student s2 = *(Student*)b;
    if(s1.height != s2.height)
        return s2.height - s1.height;
    return strcmp(s1.name, s2.name);
}