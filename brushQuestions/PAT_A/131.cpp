#include <iostream>
#include <cstring>
#include <iomanip>
#include <vector>
#include <map>

using namespace std;

int len, change;
int visit[10000];
vector< vector<int> > nearNode(10000);
vector<int> resultPath;
map<int, int> line;

int changes(vector<int> path);
void DFS(int start, int end, int length, vector<int> path);

int main()
{
	int N, M, K, node;
	cin >> N;
	for(int i = 0;i < N;i++){
		cin >> M;
		vector<int> onePath;
		for(int j = 0;j < M;j++){
			cin >> node;
			if(j){
				line[onePath.back() * 10000 + node] = line[node * 10000 + onePath.back()] = i + 1;
				nearNode[onePath.back()].push_back(node);
				nearNode[node].push_back(onePath.back());
			}
			onePath.push_back(node);
		}
	}
	cin >> K;
	for(int i = 0;i < K;i++){
		int start, end, length = 0;
		len = change = 10000;
		memset(visit, 0, 10000 * sizeof(int));
		vector<int> path;
		cin >> start >> end;

		path.push_back(start);
		DFS(start, end, length, path);
		
		int preLine = 0, preNode = start;
		cout << len << endl;
		for (int j = 1;j < resultPath.size();j++) {
            if (line[resultPath[j - 1] * 10000 + resultPath[j]] != preLine) {
                if(preLine != 0){
					cout << "Take Line#" << preLine << " from " << setfill('0') << setw(4) << preNode << " to " << setfill('0') << setw(4) << resultPath[j - 1] << "." << endl;
				}
                preLine = line[resultPath[j - 1] * 10000 + resultPath[j]];
                preNode = resultPath[j - 1];
            }
		}
		cout << "Take Line#" << preLine << " from " << setfill('0') << setw(4) << preNode << " to " << setfill('0') << setw(4) << end << "." << endl;
	}

}

int changes(vector<int> path){
	int cnt = -1, preLine = 0;
    for (int i = 1; i < path.size(); i++) {
        if (line[path[i - 1] * 10000 + path[i]] != preLine){
			cnt++;
		}
        preLine = line[path[i - 1] * 10000 + path[i]];
    }
    return cnt;
}
void DFS(int start, int end, int length, vector<int> path){
	if(start == end){
		int tempChange = changes(path);
		if((length < len) || ((length == len) && (tempChange < change))){
			resultPath = path;
			len = length;
			change = tempChange;
		}
		return;
	}
	length++;
	for(int i = 0;i < nearNode[start].size();i++){
		if(!visit[nearNode[start][i]]){
			visit[nearNode[start][i]] = 1;
			path.push_back(nearNode[start][i]);
			DFS(nearNode[start][i], end, length, path);
			visit[nearNode[start][i]] = 0;
			path.pop_back();
		}
	}
}