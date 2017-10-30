#include <stdio.h>
int main(){
    int n=0,i,j,b0=0,b1=1,b2=2,a[10][3];
    for(i=0;;i++){
        scanf("%d/%d/%d\n",&a[i][b0],&a[i][b1],&a[i][b2]); 
    }
    for(j=0;j<=i;j++){
    	if(a[j][b1]>2){
        	switch(a[j][b1]){
            	case 3:         n=31+28+a[j][b2];    break;
            	case 4:         n=31*2+28+a[j][b2];    break;
            	case 5:         n=31*2+30+28+a[j][b2];    break;
            	case 6:         n=31*3+30+28+a[j][b2];    break;
            	case 7:         n=31*3+30*2+28+a[j][b2];    break;
            	case 8:         n=31*4+30*2+28+a[j][b2];    break;
           	 	case 9:         n=31*5+30*2+28+a[j][b2];    break;
            	case 10:        n=31*5+30*3+28+a[j][b2];    break;
            	case 11:        n=31*6+30*3+28+a[j][b2];    break;
            	case 12:        n=31*6+30*4+28+a[j][b2];    break;
        	}
        	if(a[j][b0]/400==0)||(a[j][b0]%100!=0 && a[j][b0]%4==0 )
            	n++;
    	}
   	 	else if(a[j][b1]==1)
        	n=a[j][b2];
    	else
        	n=31+a[j][b2];
   	 	printf("%d\n",n);
    }
    return 0;
}
