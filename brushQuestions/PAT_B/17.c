//运行正确
#include <stdio.h>
int main()
{
    int B,R,i,j=0;
    char A[1002]={'\0'},Q[1001]={'\0'};
    scanf("%s%d",A,&B);
    for(i=0;A[i]!='\0';i++){
        if((A[0]-'0')/B==0&&A[1]=='\0'){
            R=A[0]-'0';
            Q[0]='0';
            break;
        }
        if((A[i]-'0')/B!=0){ 
            Q[j]=(A[i]-'0')/B+48;
            A[i]=(A[i]-'0')%B+48; 	 	
            j++;
        }
        if(A[i+1]!='\0'){
            Q[j]=((A[i]-'0')*10+(A[i+1]-'0'))/B+48;
            A[i+1]=((A[i]-'0')*10+(A[i+1]-'0'))%B+48;
            A[i]='0';
            j++;
        }     
        if(A[i+1]=='\0')
            R=A[i]-'0';  
    }
    printf("%s %d",Q,R);
    return 0;
}