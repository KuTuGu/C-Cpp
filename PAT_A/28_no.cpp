//超时
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

struct student{
    int id;
    string name;
    int rank;
    int flag;
};
bool compare(struct student student1, struct student student2);
int main()
{
    int N, C;
    cin >> N >> C;
    vector<struct student> students(N);
    for(int i = 0;i < N;i++){
        cin >> students[i].id >> students[i].name >> students[i].rank;
        students[i].flag = C;
    }
    sort(students.begin(), students.end(), compare);
    for(int i = 0;i < N;i++)
        cout << setw(6) << setfill('0') << students[i].id << " " << students[i].name << " " << students[i].rank << endl;
    return 0;
}
bool compare(struct student student1, struct student student2){
    if(student1.flag == 2 && student1.name != student2.name)
        return student2.name > student1.name;
    else if(student1.flag == 3 && student1.rank != student2.rank)
        return student2.rank > student1.rank;
    return student2.id > student1.id;
}
