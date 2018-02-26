//运行正确
#include <stdio.h>
int search(char *A,int a,int b);
int main()
{
    int i,j,N,m;
    int a[5];
    char A[100] = {'\0'},B[100] = {'\0'},C[100] = {'\0'};
    fgets(A,100,stdin);
    fgets(B,100,stdin);
    fgets(C,100,stdin);
    scanf("%d",&N);
    for(i = 0;i < N;i++){
        m = 0;
        for(j = 0;j < 5;j++){
            scanf("%d",&a[j]);
        }
        if(!(search(A,a[0],1) != 1 && search(B,a[1],1) != 1 && search(C,a[2],1) != 1 && search(B,a[3],1) != 1 && search(A,a[4],1) != 1))
            m++; 
        if(m == 0){
            for(j = 0;j < 5;j++){
                switch(j){
                    case 0: search(A,a[j],0);printf("(");
                    break;
                    case 1: search(B,a[j],0);
                    break;
                    case 2: search(C,a[j],0);
                    break;
                    case 3: search(B,a[j],0);printf(")");
                    break;
                    case 4: search(A,a[j],0);
                    break;
                }
            }
        }
        else
            printf("Are you kidding me? @\\/@");
        printf("\n");
    }
    return 0;
}
int search(char *A,int a,int b){
    int i,j = 0;
    for(i = 0;A[i] != '\0';i++){
        if(A[i] == '['){
            j++;
            if(j == a)                
                break;
        }
    }
    if(A[i] != 0){
        if(b == 0){
            for(j = i + 1;A[j] != ']';j++)
                printf("%c",A[j]);
        }
        return 0;
    }
    else
        return 1;
}