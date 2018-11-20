//运行正确
#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,R1,P1,R2,P2;
    scanf("%f%f",&R1,&P1);
    scanf("%f%f",&R2,&P2);
    a=R1*cos(P1)*R2*cos(P2)-R1*sin(P1)*R2*sin(P2);
    b=R1*cos(P1)*R2*sin(P2)+R1*sin(P1)*R2*cos(P2);
    if(b>=0)
        printf("%.2f+%.2fi",a,b);
    else 
        printf("%.2f-%.2fi",a,-b);
    return 0;
}
    
    
