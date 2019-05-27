#include <stdio.h>
#define INF 10000000000000000000
int main() {
    long long money[2][3];
    long long result[3];
    long long decimal[3] = {29, 17, INF};
    long long carry = 0;
    scanf("%lld%*c%lld%*c%lld", &money[0][2], &money[0][1], &money[0][0]);
    scanf("%lld%*c%lld%*c%lld", &money[1][2], &money[1][1], &money[1][0]);

    for(int i = 0;i < 3;i++){
        result[i] = (money[0][i] + money[1][i] + carry) % decimal[i];
        carry = (money[0][i] + money[1][i] + carry) / decimal[i];
    }
    printf("%lld.%lld.%lld\n", result[2], result[1], result[0]);
    return 0;
}