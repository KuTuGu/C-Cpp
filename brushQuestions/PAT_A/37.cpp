#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n, m, num, q = 0, p = 0, ans = 0;
	vector<int> vec1, vec2;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> num;
		vec1.push_back(num);
	}

	cin >> m;
	for(int i = 0;i < m;i++){
		cin >> num;
		vec2.push_back(num);
	}

	sort(vec1.begin(), vec1.end());
	sort(vec2.begin(), vec2.end());

	while(p < m && q < n && vec1[q] < 0 && vec2[p] < 0) {
        ans += vec2[p] * vec1[q];
        p++; 
		q++;
    }
    p = m - 1, q = n - 1;
    while(p >= 0 && q >= 0 && vec2[p] > 0 && vec1[q] > 0) {
        ans += vec2[p] * vec1[q];
        p--; 
		q--;
    }

	cout << ans << endl;

	return 0;
}
