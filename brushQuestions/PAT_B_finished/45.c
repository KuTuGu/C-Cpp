#include<stdio.h>
#include<stdlib.h>
int cmp (const void *a, const void *b);
int main()
{
    int n,i,j,k = 0,max = 0;
    int a[100000],b[100000],c[100000];
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d",&a[i]);
        b[i] = a[i];
    }
    qsort(a,n,sizeof(a[0]),cmp);
    for(i = 0; i < n; i++){
        if(a[i] == b[i] && b[i] > max){
            c[k] = b[i];
            k++;
        }
        if(b[i] > max)
            max = b[i];
    }
    if(k == 0){
        printf("0\n\n");
        return 0;
    }
    qsort(c,k,sizeof(c[0]),cmp);
    printf("%d\n",k);
    for(i = 0; i < k; i++){
        if(i != k-1)
            printf("%d ",c[i]);
        else
            printf("%d\n",c[i]);
    }
    return 0;
}
int cmp (const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}