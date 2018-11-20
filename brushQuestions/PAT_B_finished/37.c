//运行正确，认真做题，力争全对！！！
#include <stdio.h>
void swap(int *a,int *b);//交换
void read(int *a,int *b);//读取,算钱数
void reduce(int a);//还原回原形式
int main()
{
    int P[3] = {0},A[3] = {0},C[3]={0};
    read(P,&C[0]);
    read(A,&C[1]);
    //判断大小1538
    if(C[0] > C[1]){//少付了
        printf("-");
        swap(&C[0],&C[1]);//保证C[0] < C[1]
    }
    C[2] = C[1] - C[0];
    reduce(C[2]);
    return 0;
}
void read(int *a,int *b){
    //读取"."不赋值
    scanf("%d%*c%d%*c%d",&a[0],&a[1],&a[2]);
    //全化为Knut
    *b = (a[0] * 17 + a[1]) * 29 + a[2];
}
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void reduce(int a){
   int i,j; 
   i = a / (17 * 29);
   a -= i * (17 * 29);
   j = a / 29;
   a -= j * 29;
   printf("%d.%d.%d",i,j,a);
}