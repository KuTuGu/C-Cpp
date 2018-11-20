//遍历图
#include <iostream>
#include <algorithm>
using namespace std;

int v[1010][1010];
bool visit[1010];
//通过深度搜索，查找与该城市相连的一系列城市，访问过则表示相连
void dfs(int node,int n) {
    visit[node] = true;
    for(int i = 1; i <= n; i++) {
        if(visit[i] == false && v[node][i] == 1)
            dfs(i, n);
    }
}
int main() {
    int n, m, k, a, b;

    cin >> n >> m >> k; 
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        v[a][b] = v[b][a] = 1;
    }
    for(int i = 0; i < k; i++) {
        //填充
        fill(visit, visit + 1010, false);
        cin >> a;
        int cnt = 0;
        visit[a] = true;
        for(int j = 1; j <= n; j++) {
            if(visit[j] == false) {
                dfs(j, n);
                cnt++;
            }
        }
        cout << cnt - 1 << endl;
    }
    return 0;
}