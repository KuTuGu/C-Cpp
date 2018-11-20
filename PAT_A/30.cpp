/*
Dijkstra算法，优先队列优化,做到求最短长度
查了下存储完整路径，要用到dfs，后来发现Dijkstra也不需要(￣▽￣)"
*/
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

struct Road{
    int city2, distance, cost;

    Road(){}; 
    Road(int a, int b, int c){
        city2 = a;
        distance = b;
        cost = c;
    }

    bool operator < (const Road & other) const{        
        return this->distance > other.distance;    
    }
};

const int INF = 501;
int N, M, S, D;
int mincost = 99999999, len = 99999999;
vector<int> path, result, Cost, Len;
vector<int>::iterator ret;
vector< vector<Road> > roadList(INF);

void dfs(int s);

int main()
{
    int city1;
    cin >> N >> M >> S >> D;

    Road road;
    vector<int> dis(N, INF);

    for(int i = 0;i < M;i++){
        cin >> city1 >> road.city2 >> road.distance >> road.cost;
        roadList[city1].push_back(road);
        roadList[road.city2].push_back(Road(city1, road.distance, road.cost));
    }

    dfs(S);

    for(int i = 0;i < result.size();i++){
        cout << result[i] << " ";
    }
    cout << len << " " << mincost << endl;

    return 0;
}

void dfs(int s) {
    path.push_back(s);
    if(s == D) {
        int tempcost = 0, length = 0;
        for(int i = Cost.size() - 1; i >= 0; i--){
            tempcost += Cost[i];
        }
        for(int i = Len.size() - 1; i >= 0; i--){
            length += Len[i];
        }
        if(length < len){
            mincost = tempcost;
            result = path;
            len = length;
        }
        else if((length == len) && (tempcost < mincost)){
            mincost = tempcost;
            result = path;
        }
        path.pop_back();
        Cost.pop_back();
        Len.pop_back();
        return;
    }
    for(int i = 0; i < roadList[s].size(); i++){
        ret = find(path.begin(), path.end(), roadList[s][i].city2);
        if(ret == path.end()){
            // cout << "costIn: " << roadList[s][i].cost << endl; 
            Cost.push_back(roadList[s][i].cost);
            // cout << "lenIn: " << roadList[s][i].distance << endl;
            Len.push_back(roadList[s][i].distance);
            dfs(roadList[s][i].city2);
        }
    }
    if(path.size() == 1)
        return;
    path.pop_back();
    Cost.pop_back();
    Len.pop_back();
}