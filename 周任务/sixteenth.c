//运行超时
#include <stdio.h>
int main()
{
    int n,j,q,b[5]={0};
    char a,e,i,o,u,c[]={a,e,i,o,u};
    char arr[101];
    scanf("%d",&n);
    for(q=0;q<n;q++){
        do{
            j=0;
        	scanf("%c",&arr[j]);
            j++;
        }while(arr[j]!='0');
        for(j=0;arr[j]!='\0';j++){
            switch(arr[j]){
                case 'a': b[0]++;   break;
                case 'e': b[1]++;   break;
                case 'i': b[2]++;   break;
                case 'o': b[3]++;   break;
                case 'u': b[4]++;   break;
                default:          break;
            }
        }
        printf("\n");
        for(j=0;j<5;j++){
             printf("%c:%d\n",c[j],b[j]);
        }
    }
    return 0;
}
