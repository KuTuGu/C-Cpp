/*dijkstra算法*/
#include <iostream>
#include <algorithm>
using namespace std;
int n, m, c1, c2;
int e[510][510], weight[510], dis[510], num[510], w[510];
bool visit[510];
const int inf = 99999999;
int main() {
    scanf("%d%d%d%d", &n, &m, &c1, &c2);
    for(int i = 0; i < n; i++)
        scanf("%d", &weight[i]);
    fill(e[0], e[0] + 510 * 510, inf);
    fill(dis, dis + 510, inf);
    int a, b, c;
    for(int i = 0; i < m; i++) {
        scanf("%d%d%d", &a, &b, &c);
        e[a][b] = e[b][a] = c;
    }
    dis[c1] = 0;
    w[c1] = weight[c1];
    num[c1] = 1;
    for(int i = 0; i < n; i++) {
        int u = -1, minn = inf;
        for(int j = 0; j < n; j++) {
            if(visit[j] == false && dis[j] < minn) {
                u = j;
                minn = dis[j];
            }
        }
        if(u == -1) break;
        visit[u] = true;
        for(int v = 0; v < n; v++) {
            if(visit[v] == false && e[u][v] != inf) {
                if(dis[u] + e[u][v] < dis[v]) {
                    dis[v] = dis[u] + e[u][v];
                    num[v] = num[u];
                    w[v] = w[u] + weight[v];
                } else if(dis[u] + e[u][v] == dis[v]) {
                    num[v] = num[v] + num[u];
                    if(w[u] + weight[v] > w[v])
                        w[v] = w[u] + weight[v];
                }
            }
        }
    }
    printf("%d %d", num[c2], w[c2]);
    return 0;
}
/*  只通过一个测试点。。。
//广度优先搜索
#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;

#define abs(a) (a >= 0 ? a : -a)

//定义搜索函数
void search(int (*path)[3], int cityStart, int cityEnd, int roadNum, int num[5]);
int main()
{
    //储存用户输入信息
    int cityNum,roadNum,cityStart,cityEnd;
    cin >> cityNum >> roadNum >> cityStart >> cityEnd;
    int num[5] = {0};
    for(int i = 0;i < cityNum;i++)
        cin >> num[i];
    //二维动态数组
    int (*path)[3] = new int[roadNum][3];
    for(int i = 0;i < roadNum;i++){
        for(int j = 0;j < 3;j++)
            cin >> (*(path + i))[j];
    }

    //广度搜索
    search(path, cityStart, cityEnd, roadNum, num);
    return 0;
}
void search(int (*path)[3], int cityStart, int cityEnd, int roadNum, int num[5]){
    //定义将要用到的数据结构

    //记录最短路径的长度
    int len = 99999999;
    //地图队列
    queue< vector <int> > map;
    //最短路径队列
    queue< vector <int> > finished;
    //一个路径容器
    vector<int> road;
    road.push_back(cityStart);
    map.push(road);

    //非空时循环
    while(!map.empty()){
        //储存已访问过的城市
        set<int> visited;
        visited.insert(cityStart);
        //取出头元素
        vector<int> nowPath = map.front();
        map.pop();
        //取出该容器最后一个元素判断
        int nowCity = nowPath.back();
        if(nowCity == cityEnd && nowPath.size() <= len){
            len = nowPath.size();
            finished.push(nowPath);
        }
        else{
            //如果长度大于最短路径，直接退出循环
            if(nowPath.size() > len)
                break;
            for(int i = 0;i < roadNum;i++){
                for(int j = 0;j < 2;j++){
                    if(path[i][j] == nowCity && !visited.count(path[i][abs((j - 1))])){
                        vector<int> realPath = nowPath;
                        visited.insert(path[i][abs(j - 1)]);
                        //路径长短不同
                        for(int m = 0;m < path[i][2];m++)
                            realPath.push_back(path[i][abs((j - 1))]);
                        //下面语句只能在该区块执行
                        map.push(realPath);
                    }
                }
            }
        }
    }

    //输出结果
    int total = 0,max = 0;
    while(!finished.empty()){
        int team = 0;
        total++;
        vector<int> nowPath = finished.front();
        finished.pop();
        len = nowPath.size();
        for(int i = 0;i < len - 1;i++){
            if(nowPath[i] != nowPath[i + 1])
                team += num[nowPath[i]];
        }
        if(nowPath[len - 2] != nowPath[len - 1])
            team += num[nowPath[len - 1]];
        if(team > max)
            max = team;
    }
    cout << total << " " << max;
}
*/