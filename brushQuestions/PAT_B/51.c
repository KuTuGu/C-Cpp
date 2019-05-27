/*在输出的时候要避免-0.00的情况出现，测试点3,4很可能是给了接近0的复数
比如-0.0000001，四舍五入就是0*/
#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,R1,P1,R2,P2;
    scanf("%lf%lf",&R1,&P1);
    scanf("%lf%lf",&R2,&P2);
    a = R1 * cos(P1) * R2 * cos(P2) - R1 * sin(P1) * R2 * sin(P2);
    b = R1 * cos(P1) * R2 * sin(P2) + R1 * sin(P1) * R2 * cos(P2);
    if(a <= -0.005 || a > 0){
        if(b >= 0)
            printf("%.2f+%.2fi",a,b);
        else if(b <= -0.005)
            printf("%.2f-%.2fi",a,-b);
        else 
            printf("%.2f+0.00i",a);
    }
    else{
        if(b >= 0)
            printf("0.00+%.2fi",b);
        else if(b <= -0.005)
            printf("0.00-%.2fi",-b);
        else 
            printf("0.00+0.00i");
    }
    return 0;
}