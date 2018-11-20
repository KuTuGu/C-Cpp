//段错误
#include <stdio.h>
int search(char *a,int *j);
int main()
{
    int i,j,a = 0,b = 0;
    char B;
    char A[1100] = {'\0'};
    scanf("%c\n",&B);
    do{  
        scanf("%c",&A[a++]);  
    }while(A[a - 1] != '\n');  
    A[a - 1] = '\0';//删去'\n'
    if(B == 'C'){
        do{
            a = search(A,&b);
            if(a != 1)
                printf("%d%c",a,A[b]);
            else    
                printf("%c",A[b]);
        }while(A[++b] != '\0');
    }
    else{
        do{
            if(A[b] >= '0' && A[b] <= '9'){
                a = A[b] - '0';
                b++;
                while(A[b] >= '0' && A[b] <= '9'){
                    a *= 10;
                    a += A[b] - '0';
                    b++;
                }
                
                while(a--)
                    printf("%c",A[b]);
                b++;
            }
            else{    
                printf("%c",A[b++]);
            }
        }while(A[b] != '\0');
    }
}
int search(char *a,int *j){
    int b;
    for(b = 1;a[*j] == a[*j + 1];(*j)++)
        b++;
    return b;
}            