/*
关键点比较函数，没想到
https://www.liuchuo.net/archives/2303

自己的思路比较繁琐，用map存储，判断是否存在子串关系，再排序输出
细节错了很多。。还有一个超时的：
*/
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(){
	vector<string> vec;
	map< string, vector<string> > dict;
	map< string, vector<string> >::iterator it;
	int n, num;
	string result = "";
	cin >> n;
	map< string, int > cal;

	for(int i = 0;i < n;i++){
		cin >> num;
		if(num){
			vec.push_back(to_string(num));
		}
	}

	sort(vec.begin(), vec.end());

	for(int i = 0;i < n;i++){
		int len = -1;
		for(it = dict.begin();it != dict.end();it++){
			len = vec[i].find(it->first);
			if(len > -1){
				len = (it->first).length();
				break;
			}
		}

		if(len == -1){
			dict[vec[i]] = vector<string>(1, vec[i]);
			cal[vec[i]] = 1;
		}
		else{
			string temp = vec[i].substr(len);
			if(temp != ""){
				(it->second).push_back(temp);
			}
			else{
				(it->second).push_back(vec[i]);
				cal[vec[i]]++;
			}
		}
	}

	for(it = dict.begin();it != dict.end();it++){
		string re = "";

		sort((it->second).begin(), (it->second).end());

		for(size_t i = 0;i < (it->second).size();i++){
			string temp = it->first;
			if((it->second)[i] == it->first && cal[temp]){
				cal[temp]--;
			}
			else{
				temp += (it->second)[i];
			}
			re += temp;
		}
		result += re;
	}
	if(result != ""){
		cout << result << endl;
	}
	else{
		cout << "0" << endl;
	}

	return 0;
}
