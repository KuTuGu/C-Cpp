//运行正确
#include <stdio.h>
int main()
{
    int i,sum = 0,b = 0,c = 0;
    char a[100001] = {'\0'};
    fgets(a,100001,stdin);
    for(i = 0;a[i] != '\0';i++){
        if(a[i] >= 'a' && a[i] <= 'z'){
            sum += a[i] - 'a' + 1;
        }
        else if(a[i] >= 'A' && a[i] <= 'Z'){
            sum += a[i] - 'A' + 1;
        }
    }
    while(sum){
        if(sum % 2)
            c++;//余1
        else
            b++;//余0
        sum /= 2;
    }
    printf("%d %d",b,c);
    return 0;
}
