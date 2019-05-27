#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b);
int main()
{
    int N,p,i,first,last,a,max = 0;
    long A[100000] = {0};
    scanf("%d%d",&N,&p);
    //快速排序
    for(i = 0;i < N;i++)
        scanf("%ld",&A[i]);
    qsort(A,N,sizeof(A[0]),cmp);
    //挑选方案
    for(first = 0,last = 0;last < N;first++){
        while(last < N && A[last] <= A[first] * p)
            last++;
        if(max < last - first) 
            max = last - first;
    }
    printf("%d",max);
    return 0;
}
int cmp(const void *a,const void *b){
    return *(int*)a - *(int*)b;   
}