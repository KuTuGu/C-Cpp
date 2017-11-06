//运行正确
#include <stdio.h>
int main()
{
    int n,j,q,b[5],a;
    char c[5]={'a','e','i','o','u'};
    char arr[101];
    scanf("%d\n",&n);//scanf读取并舍弃连续空字符
    for(q=0;q<n;q++){
        gets(arr);//两行输入分开  gets读取到\n时结束一行的读取
        b[0]=0;b[1]=0;b[2]=0;b[3]=0;b[4]=0;//必须在累加之前初始化,而且要注意初始化位置，不能在case后（因为switch在循环中）
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
        if(a!=0)
            printf("\n");
        a++;
        for(j=0;j<5;j++){
            printf("%c:%d\n",c[j],b[j]);
        }
    }
    return 0;
}
