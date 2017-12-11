//第二个测试点
#include<stdio.h>
int main()
{
    int N,i,j,m=0,z,M=0;
    char A[19]={'0'};
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%s",A);
        for(j=0;j<17;j++){
            if(!(A[j]>='0'&&A[j]<='9')){
                m++;
                break;
            }
        }
        z=((A[0]-'0')*7+(A[1]-'0')*9+(A[2]-'0')*10+(A[3]-'0')*5+(A[4]-'0')*8+(A[5]-'0')*4+(A[6]-'0')*2+(A[7]-'0')*1+(A[8]-'0')*6+(A[9]-'0')*3+(A[10]-'0')*7+(A[11]-'0')*9+(A[12]-'0')*10+(A[13]-'0')*5+(A[14]-'0')*8+(A[15]-'0')*4+(A[16]-'0')*2)%11;
        switch(z){
            case 0:   if(A[17]!='1')   m++ ; break;
            case 1:   if(A[17]!='0')   m++ ; break;
            case 2:   if(A[17]!='X')   m++ ; break;
            case 3:   if(A[17]!='9')   m++ ; break;
            case 4:   if(A[17]!='8')   m++ ; break;
            case 5:   if(A[17]!='7')   m++ ; break;
            case 6:   if(A[17]!='6')   m++ ; break;
            case 7:   if(A[17]!='5')   m++ ; break;
            case 8:   if(A[17]!='4')   m++ ; break;
            case 9:   if(A[17]!='3')   m++ ; break;
            case 10:  if(A[17]!='2')   m++ ; break;
        }
        if(m!=0){
            printf("%s\n",A);
            M++;
            continue;
        }
    }
    if(M==0)
        printf("All passed");
    return 0;
}
