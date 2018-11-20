/*
lines：31、32 段错误
并查集：https://blog.csdn.net/Win_Man/article/details/50812316
连通图：https://www.liuchuo.net/archives/2331
*/
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int N, K;
	cin >> N >> K;
	map<string, int> visit, result;
	map<string, int>::iterator it, it2;
	vector< map<string, int> > gangs;

	for(int i = 0;i < N;i++){
		string name1, name2;
		int len;

		cin >> name1 >> name2 >> len;
		it = visit.find(name1);
		it2 = visit.find(name2);
		if(it != visit.end() && it2 != visit.end()){
			gangs[it->second][name1] += len;
			gangs[it2->second][name2] += len;
			if(it->second != it2->second){
				gangs[it->second].insert(gangs[it2->second].begin(), gangs[it2->second].end());
				gangs.erase(gangs.begin() + it2->second);
				visit[name2] = it->second;
			}
		}
		else if(it != visit.end()){
			gangs[it->second][name1] += len;
			gangs[it->second][name2] = len;
			visit[name2] = it->second;
		}
		else if(it2 != visit.end()){
			gangs[it2->second][name1] = len;
			gangs[it2->second][name2] += len;
			visit[name1] = it2->second;
		}
		else{
			map<string, int> newMap;
			newMap[name1] = newMap[name2] = len;
			gangs.push_back(newMap);
			visit[name1] = visit[name2] = gangs.size() - 1;
		}
	}

	for(int i = gangs.size() - 1;i >= 0;i--){
		if(gangs[i].size() > 2){
			int cost = 0, max = 0;
			string maxName;
			for(auto item : gangs[i]){
				if(item.second > max){
					max = item.second;
					maxName = item.first;
				}
				cost += item.second;
			}
			if(cost > 2 * K){
				result[maxName] = gangs[i].size();
			}
		}
	}

	cout << result.size() << endl;
	for(it = result.begin();it != result.end();it++){
		cout << it->first << " " << it->second << endl;
	}
	
    return 0;
}
