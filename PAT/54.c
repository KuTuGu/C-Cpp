//第二个测试点
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int N,i,j,m,num = 0;
    int b[10];
    char a[10] = {'\0'};
    float sum = 0.0;
    scanf("%d",&N);
    for(i = 0;i < N;i++){
        for(j = 0;j < 10;j++){
            a[j] = '\0';
            b[j] = 0;
        }
        scanf("%s",a);
        m = 0;
        for(j = 0;a[j] != '\0';j++){
            if(!(a[j] >='0' && a[j] <= '9')){
                if(a[j] == '-'){
                    b[0]++;
                    b[2] = j;
                }
                else if(a[j] == '.'){
                    b[1]++;
                    b[3] = j;
                    b[4] = strlen(a);
                }
                else{
                    m = 1;
                    break;
                }
            }
        }
        if(m == 1 || b[0] > 1 || b[1] > 1 || b[2] != 0 || b[3] < b[4] - 3 || atof(a) > 1000 || atof(a) < -1000){
            printf("ERROR: %s is not a legal number\n",a);
            num++;
        }
        else{
            sum += atof(a);
        }
    }
    if(N - num)
        printf("The average of %d numbers is %.2f",N - num,sum / (N - num));
    else
        printf("The average of 0 numbers is Undefined");
}