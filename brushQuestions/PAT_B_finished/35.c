#include<stdio.h>
#include<stdlib.h>
int cmp (const void *a,const void *b);
int main()
{
    int n,i,j,length,count = 0;
    int a[1000],b[1000],c[1000];
    scanf("%d",&n);
    for(i = 0;i < n;i++)
        scanf("%d",&a[i]);
    for(i = 0;i < n;i++)
        scanf("%d",&b[i]);
    for(i = 0;i < n-1 && b[i] <= b[i+1];i++)//找到未排序位置
        ;
    for(length = ++i;i < n && b[i] == a[i];i++)//找到不相等位置
        ;
    if(i == n){
        length++;
        printf("Insertion Sort\n");
        qsort(a, length, sizeof(a[0]),cmp);//向后排一个
    }
    else{
        printf("Merge Sort\n");
        for(length = 1,i = 0;i < n && length <= n;length *= 2){//length：每一份长度
            for(i = 0;i < n && a[i] == b[i];i++)//找到不相等位置,当i==n时，也就是两个相等时，只需再排下一次便可以退出外面循环
                ; 
            for(j = 0;j < n / length;j++)//份数
                qsort(a + j * length, length, sizeof(int), cmp);
            qsort(a + j * length, n % length, sizeof(int), cmp);
        }
    }
    for(i = 0; i < n; i++){
        if(i != n-1){
            printf("%d ",a[i]);
        }
        else{
            printf("%d\n",a[i]);
        }
    }
    return 0;
}
int cmp(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}
