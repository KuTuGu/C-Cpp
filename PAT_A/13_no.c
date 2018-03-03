#include <stdio.h>
#include <stdlib.h>
struct Grade{
    int ID;
    int C,M,E,A;
}students[2001];  //学生结构体
int cmp(const void *a,const void *b);
int main()
{
    int b = 1/2.0 + 0.5;
    printf("%d",b);
    int a[6] = {0,2,1,5,4,3},i;
    qsort(a + 1,5,sizeof(a[1]),cmp);
    for(i = 0;i < 6;i++){
        printf("%d  ",a[i]);
    }
    return 0;
}
int cmp(const void *a,const void *b){
    return *(int *)a - *(int *)b; 
}