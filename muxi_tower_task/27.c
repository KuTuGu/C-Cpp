//运行错误
#include<stdio.h>
int main(){
    int N,i,j,m;
    float Q,mon,sum;
    char C[100]={'0'},b;
    float A[100]={0};
    do{
        mon=0.0;
    	scanf("%f%d",&Q,&N);
    	for(i=0;i<N;i++){//循环每张发票
            sum=0;
        	scanf("%d",&m);
            for(j=0;j<m;j++){//循环每张发票中的每个报价
                scanf("%c%c%f",&C[j],&b,&A[j]);
            	if(C[j]!='A'&&C[j]!='B'&&C[j]!='C')
                    break;
                if(A[j]>600.0)
                    A[j]=0.0;
                sum+=A[j];//每张发票的总额
            }
            if(sum>1000||(C[j]!='A'&&C[j]!='B'&&C[j]!='C'))//如果大于1000或有不是三类东西的，重新开始下一张
                continue;
            mon+=sum;//多张发票的总额
    	}
        if(mon>Q)//判断总额和限额的关系，决定报销钱数
            printf("%.2f\n",Q);
        else
            printf("%.2f\n",mon); 
    }while(N);
    return 0;
}
