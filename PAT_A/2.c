//最后要判断一下是否存在系数相加为0的情况，系数为0，就不能输出
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b);
int main()
{
    int i,j = 0,num,exponents,max = 0;
    int index[20] = {0};
    float data;
    float coefficients[1000] = {0.0};
    scanf("%d",&num);
    for(i = 0;i < num;i++){
        scanf("%d",&exponents);
        index[j++] = exponents;
        if(exponents > max)
            max = exponents;
        scanf("%f",&coefficients[exponents]);
    }
    scanf("%d",&num);
    for(i = 0;i < num;i++){
        scanf("%d",&exponents);
        if(exponents > max)
            max = exponents;
        if(coefficients[exponents]){
            scanf("%f",&data);
            coefficients[exponents] += data;
        }
        else{
            index[j++] = exponents;
            scanf("%f",&coefficients[exponents]);
        }
    }
    num = 0;
    qsort(index,j,sizeof (index[0]),cmp);
    for(i = j - 1;i >= 0;i--){
        if(coefficients[index[i]])
            num++;  
    }
    printf("%d",num);
    for(i = j - 1;i >= 0;i--){
        if(coefficients[index[i]])
            printf(" %d %.1f",index[i],coefficients[index[i]]);
    }
    return 0;
}
int cmp(const void *a,const void *b){
    return *(int *)a - *(int *)b;
}