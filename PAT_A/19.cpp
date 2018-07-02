#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
	int N, b; 
    vector<int> v;
	cin >> N >> b; 
	do{
	    v.push_back(N % b);
		N /= b;
	}while (N);
	bool flag = false;
	for (int i = 0;i < v.size() / 2;i++){
		if (v[i] != v[v.size() - 1 - i]){
			flag = true;
			break;
		}
	}
	if (flag)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	for (int i = 0;i < v.size();i++){
		if (i != v.size() - 1)
			cout << v[v.size()-1-i] << " ";
		else
			cout << v[0];
	}
	return 0;
}

