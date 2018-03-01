#include <stdio.h>
int main(){
    int nodes_num,noleaf_num;
    scanf("%d%d",&nodes_num,&noleaf_num);
    int i,father,child_num,ID1[100],result = 0;
    for(i = 0;i < noleaf_num;i++){
        scanf("%d%d",&father,&child_num);
        for(j = 0;j < child_num;j++)
            scanf("%d",&ID[j]);
        if(i)
            printf(" ");
        printf("%d",result);
    }
    return 0;
}