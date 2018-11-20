/*每次储存ID时都要清空上一次字符串数组，因为ID长度不一定相等
利用strcmp比较时间
注意比较的时候有等于号，对应的是第一次输入时的情况*/
#include <stdio.h>
#include <string.h>
int main()
{
    int num,i,j;
    char signin[10] = {'\0'},signout[10] = {'\0'},min[10] = {'\0'},max[10] = {'\0'};
    char ID[20],minID[20] = {'\0'},maxID[20] = {'\0'};
    scanf("%d\n",&num);
    for(i = 0;i < num;i++){
        for(j = 0;j < 20;j++)
            ID[j] = '\0';
        scanf("%s%s%s",ID,signin,signout);
        if(!i){
            strcpy(min,signin);
            strcpy(max,signin);
        }
        if(strcmp(signin,min) <= 0){
            strcpy(minID,ID);
            strcpy(min,signin);
        }
        if(strcmp(signout,max) >= 0){
            strcpy(maxID,ID);
            strcpy(max,signout);
        }
    }
    printf("%s %s",minID,maxID);
    return 0;
}