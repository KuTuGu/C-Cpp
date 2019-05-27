//终于对了一个😂
#include<stdio.h>
int main()
{
    int N,i,j;
    int max[2]={0},min[2]={0};
    int B[3]={0},C[2][3]={0};//B记录甲得分,C记录甲乙手势
    char A[100001][2],D[4]={'B','C','J'};
    scanf("%d\n",&N);
    for(i=0;i<N;i++){
        scanf("%c %c\n",&A[i][0],&A[i][1]);//必须有空格，换行
        if(A[i][0]==A[i][1]){
            B[1]++;
        }
        else{
            if(A[i][0]=='C'){
                if(A[i][1]=='J'){
                    B[0]++;
                    C[0][1]++;
                }
                else{
                    B[2]++;
                    C[1][0]++;
                }
            }
            else if(A[i][0]=='J'){
                if(A[i][1]=='B'){
                    B[0]++;
                    C[0][2]++;
                }
                else{
                    B[2]++;
                    C[1][1]++;
                }
            }
            else{
                if(A[i][1]=='C'){
                    B[0]++;
                    C[0][0]++;
                }
                else{
                    B[2]++;
                    C[1][2]++;
                }
            }
        }
    }
    printf("%d %d %d\n",B[0],B[1],B[2]);
    printf("%d %d %d\n",B[2],B[1],B[0]);
    for(j=0;j<2;j++){
        for(i=0;i<3;i++){
            if(C[j][i]>max[j]){
                max[j]=C[j][i];
                min[j]=i;
            }
        }
    }
    printf("%c %c",D[min[0]],D[min[1]]);
    return 0;
}
