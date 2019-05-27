/*
method1：repeatable LCS https://blog.csdn.net/xyt8023y/article/details/46910283
method2：dynamic programming 
*/
#include <iostream>
#include <vector>
using namespace std;

int book[201], a[10001], dp[10001];

int main() {
    int n, m, x, l, num = 0, maxn = 0;
    cin >> n >> m;
    for(int i = 1; i <= m; i++) {
        cin >> x;
        book[x] = i;
    }
    cin >> l;
    for(int i = 0; i < l; i++) {
        cin >> x;
        if(book[x] >= 1)
            a[num++] = book[x];
    }
    for(int i = 0; i < num; i++) {
        dp[i] = 1;
        for(int j = 0; j < i; j++){
            if(a[i] >= a[j]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        maxn = max(dp[i], maxn);
    }
    cout << maxn << endl;

    return 0;
}
