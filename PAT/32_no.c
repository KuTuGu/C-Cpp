#include <stdio.h>
int main(){
    int *a,i;
    for(i=0;i<10;i++){
        if(i<5)
            a = &i;
    }
    printf("%d",*a);
    return 0;
}