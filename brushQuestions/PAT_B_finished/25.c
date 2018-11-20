//运行正确
#include<stdio.h>
struct node {
    int add;
    int data;
    int next;
};
int main() {
    int first,number,k,i;
    scanf("%d%d%d",&first,&number,&k );
    struct node p[100000],q[100000];
    for(i = 0;i < number;i++){
        int add1;
        scanf("%d",&add1);
        p[add1].add = add1;
        scanf("%d",&p[add1].data);
        scanf("%d",&p[add1].next);
    }
    if(first == -1){
        printf("-1\n");
        return 0;
    }
    struct node temp;
    q[0] = p[first];
    int count = 0;
    for (i = 0;q[i].next != -1;i++ ){
        int add1;
        add1 = q[i].next;
        q[i+1] = p[add1]; 
        count++;
    }
    int index = 0,j = 0,n;
    int m = k / 2,t = (count + 1) / k;
    while (1){
        if(j < t ){
            for (n = j * k;n < j * k + m;n++){
                temp = q[n];
                q[n] = q[2 * j * k + k - n - 1];
                q[2 * j * k + k - n - 1] = temp; 
            }
            j++;
        }
        else 
            break;
    }
    for (j = count;j > 0;j--)
        q[j-1].next = q[j].add;    
    for (i = 0;i < count;i++)
        printf("%05d %d %05d\n",q[i].add,q[i].data,q[i].next);
    printf("%05d %d -1\n",q[i].add,q[i].data) ;
    return 0 ;
}