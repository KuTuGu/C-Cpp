#include <stdio.h>
#include <string.h>
int main()
{
    int N,i,j,num = 0,flag;
    char a[50] = {'\0'},b[50] = {'\0'};//注意考虑非法数据的长度
    double sum = 0.0,temp;
    scanf("%d",&N);
    for(i = 0;i < N;i++){
        flag = 0;
        scanf("%s",a);
        sscanf(a,"%lf",&temp);
        sprintf(b,"%.2lf",temp);
        for(j = 0;j < strlen(a);j++){
            if(a[j] != b[j]) 
                flag = 1;
        }
        if(flag || temp < -1000 || temp > 1000){
            printf("ERROR: %s is not a legal number\n",a);
            continue;
        } 
        else{
            sum += temp;
            num++;
        }
    }
    if(num == 1)
        printf("The average of 1 number is %.2lf",sum); 
    else if(num > 1) 
        printf("The average of %d numbers is %.2lf",num,sum / num);
    else 
        printf("The average of 0 numbers is Undefined");
    return 0;
}
