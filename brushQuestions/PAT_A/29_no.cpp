#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int MAXN = 1e6 * 2 + 5;

long long a[MAXN];

int main(){
    int n, m;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%lld", a+i);
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
        scanf("%lld", a+n+i);

    sort(a, a+n+m);
    printf("%lld\n", a[n+m-1>>1]);
    return 0;
}
