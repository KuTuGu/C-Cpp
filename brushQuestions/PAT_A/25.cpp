#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

struct student{
    long long no;
    int score, finrank, loca, locarank;
};
bool cmp1(student a, student b){
    return (a.score != b.score) ? (a.score > b.score) : (a.no < b.no);
}
int main() 
{
    int n, m;
    cin >> n;
    vector<student> fin;
    for(int i = 1;i <= n;i++){
        cin >> m;
        vector<student> v(m);
        for(int j = 0;j < m;j++) {
            cin >> v[j].no >> v[j].score;
            v[j].loca = i;
        }
        sort(v.begin(), v.end(), cmp1);
        v[0].locarank = 1;
        fin.push_back(v[0]);
        for(int j = 1;j < m;j++){
            v[j].locarank = (v[j].score == v[j - 1].score) ? (v[j - 1].locarank) : (j + 1);
            fin.push_back(v[j]);
        }
    }
    sort(fin.begin(), fin.end(), cmp1);
    fin[0].finrank = 1;
    for(int j = 1;j < fin.size();j++)
        fin[j].finrank = (fin[j].score == fin[j - 1].score) ? (fin[j - 1].finrank) : (j + 1);
    cout << fin.size() << endl;
    for(int i = 0;i < fin.size();i++)
        cout << setw(13) << setfill('0') << fin[i].no << " " << fin[i].finrank << " " << fin[i].loca << " " << fin[i].locarank << endl;
    return 0;
}
