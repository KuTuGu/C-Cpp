#include <iostream>
#include <vector>
#include <set>
#include <iomanip>
// #include <algorithm>
using namespace std;

int main(){
    int N, M, K;
    cin >> N;
    vector< set<int> > sets(N + 1);
    set<int>::iterator it, search;
    for(int i = 1;i <= N;i++){
        cin >> M;
        set<int> oneSet;
        for(int j = 0;j < M;j++){
            int num;
            cin >> num;
            oneSet.insert(num);
        }
        sets[i] = oneSet;
    }
    cin >> K;
    for(int i = 0;i < K;i++){
        int setA, setB;
        cin >> setA >> setB;
        int unique = 0, total = sets[setB].size();
        for(it = sets[setA].begin();it != sets[setA].end();it++){
            // STL的方法会超时
            // search = find(sets[setB].begin(), sets[setB].end(), *it);
            if(sets[setB].find(*it) != sets[setB].end()){
                unique++;
            }
            else{
                total++;
            }
        }
        cout << fixed << setprecision(1) << unique * 1.0 / total * 100 << "%" << endl;
    }
    return 0;
}