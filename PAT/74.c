#include <stdio.h>
#include <string.h>
int main()
{
    int nBase, nA, nB, nS = 21, base, a, b;
    int i,first;
    char sBase[21] = {0}, sA[21] = {0}, sB[21] = {0}, sSum[22] = {0};
    
    /* Read base table, number A and B into strings */
    scanf("%s%s%s", sBase, sA, sB);
    
    nBase = strlen(sBase);
    nA = strlen(sA);
    nB = strlen(sB);
    
    for(i = 0; i < nBase; i++)
    {
        /* Transform corresponding digit to integers */
        a = nA <= i ? 0 : sA[nA - i - 1] - '0';
        b = nB <= i ? 0 : sB[nB - i - 1] - '0';
        base = sBase[nBase - i - 1] - '0';
        base = base == 0 ? 10 : base;
        /* Calculate ith digit A + B, temperately store integers here */
        sSum[nS - i - 1] += (a + b);
        sSum[nS - i - 2] += sSum[nS - i - 1] / base;
        sSum[nS - i - 1] = sSum[nS - i - 1] % base;
    }
    
    /* Change to char type */
    for(i = 0; i < 21; i++)
        sSum[i] += '0';
    
    /* find the first non-zero bit */
    for(first = 0; first < 21; first++) 
        if(sSum[first] != '\0' && sSum[first] != '0'){
            puts(sSum + first);
            return 0;
        }
    /* If A + B = 0, then all bits are zero */
    printf("0");
    return 0;
}
//链接：https://www.jianshu.com/p/41ab33907b56
/*//部分正确
#include <stdio.h>
#include <string.h>
int main()
{
    int a = 0,b,c,i,left = 0;
    int D[20] = {0};
    char A[21] = {'\0'},B[21] = {'\0'},C[21] = {'\0'};
    scanf("%s%s%s",A,B,C);
    for(i = 0;A[i] != '\0';i++){
        if(A[i] == '0')
            A[i] += 10;
    }
    b = strlen(B);
    c = strlen(C);
    while(b != 0 && c != 0){
        b--;
        c--;
        D[a] = (left + (B[b] - '0') + (C[c] - '0')) % (A[strlen(A) - 1 - a] - '0');
        left = (left + (B[b] - '0') + (C[c] - '0')) / (A[strlen(A) - 1 - a] - '0'); 
        a++;
    }
    while(b--){
        D[a] = (left + (B[b] - '0')) % (A[strlen(A) - 1 - a] - '0'); 
        left = (left + (B[b] - '0')) / (A[strlen(A) - 1 - a] - '0'); 
        a++; 
    }
    while(c--){
        D[a] = (left + (C[c] - '0')) % (A[strlen(A) - 1 - a] - '0'); 
        left = (left + (C[c] - '0')) / (A[strlen(A) - 1 - a] - '0'); 
        a++; 
    }
    int result;
    while(a--){
        result += D[a];
        if(a)
            result *= 10;
    }
    printf("%d",result);
    return 0;
}*/