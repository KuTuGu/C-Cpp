//运行正确
#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
void split(char *a,int *b,int *j);//a累计求和,储存在b中
int main()
{
    int N,i,j = 0,m;
    int B[10001] = {0};
    char A[10001][12] = {'\0'};
    scanf("%d\n",&N);
    for(i = 0;i < N;i++){
        fgets(A[i],13,stdin);//读取'\n'
        split(A[i],B,&j);
    }
    N = 0;
    for(i = 1;i < j;i += 2){
        if(B[i] > N){
            N = B[i];
            m = i;
        }
    }
    printf("%d %d",B[m - 1],B[m]);
    return 0;
}
void split(char *a,int *b,int *j){
    int i,n = 0,c;
    char *p = strtok(a," ");
    char *m = strtok(NULL," ");
    char *q = strtok(p,"-");
    for(i = 0;i < (*j);i += 2){
        if(b[i] == atoi(q)){
            n++;
            c = i;
        }
    }
    if(n == 0){
        b[(*j)++] = atoi(q); 
        b[(*j)++] = atoi(m); 
    }
    else{
        b[c + 1] += atoi(m);
    }
}
