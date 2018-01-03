//运行错误
#include <stdio.h>
//int arrange()
int main()
{
    int N,H,L,i,j=0,max,m=0,d;
    int p[100000][3],a[100000]={0},b[100000]={0},c[100000]={0};
    scanf("%d%d%d",&N,&L,&H);
    for(i=0;i<N;i++){
        scanf("%d%d%d",&p[i][0],&p[i][1],&p[i][2]);
        if(p[i][1]>=L&&p[i][2]>=L){
            a[m]=i;
            m++;
        }    
    }
    while(1){
        for(i=0;a[i]!=0;i++){//找到最大值
            max=p[0][1]+p[0][2];
            if(p[i][1]+p[i][2]>max){
                max=p[i][1]+p[i][2];
            }
        }
        if(max==0)//当所有值排完后再退出
            break;
        for(i=0;a[i]!=0;i++){//找到相同最大值
            if(p[i][1]+p[i][2]==max){
                b[j]=i;
                j++;
            }
        }
        if(b[1]==0){
            printf("%d %d %d\n",p[b[0]][0],p[b[0]][1],p[b[0]][2]);
            b[0]=0;
        }
        else{
            while(1){
                for(i=0;b[i]!=0;i++){//德分最大值
                    max=p[0][1];
                    if(p[i][1]>max){
                        max=p[i][1];
                    }
                }
                if(max==0)//当所有值排完后再退出
                    break;
                j=0;
                for(i=0;a[i]!=0;i++){//找到相同德分最大值
                    if(p[i][1]==max){
                        c[j]=i;
                        j++;
                    }
                }
                if(c[1]==0){
                    printf("%d %d %d\n",p[b[c[0]]][0],p[b[c[0]]][1],p[b[c[0]]][2]);
                    break;
                }
                else{
                    while(1){
                        j=0;
                        for(i=0;b[i]!=0;i++){//准考证号最大值
                            max=p[0][0];
                            if(p[i][0]>max){
                                max=p[i][0];
                                d=i;
                            }
                        }
                        if(max==0)//当所有值排完后再退出
                            break;
                        printf("%d %d %d\n",p[b[c[d]]][0],p[b[c[d]]][1],p[b[c[d]]][2]);
                        c[d]=0;
                    }
                }
            }
        }
    }
    
    return 0;
}