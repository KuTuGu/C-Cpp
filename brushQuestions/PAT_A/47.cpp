/*string is slower than char**/
#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;
#define NAMELENGTH 5

struct Student{
	char name[NAMELENGTH];
};

bool cmp(Student s1, Student s2);

int main() {
    int N, K, courseAmount, courseNumber;
    scanf("%d %d", &N, &K);
    vector< vector<Student> > course(K + 1);
    for(int i = 0;i < N;i++){
        Student aStudent;
        scanf("%s %d", aStudent.name, &courseAmount);
        for(int j = 0;j < courseAmount;j++){
            scanf("%d", &courseNumber);
            course[courseNumber].push_back(aStudent);
        }
    }

    for(int i = 1;i <= K;i++){
        sort(course[i].begin(), course[i].end(), cmp);
        printf("%d %lu\n", i, course[i].size());
        for(size_t j = 0;j < course[i].size();j++){
            printf("%s\n", course[i][j].name);
        }
    }

    return 0;
}

bool cmp(Student s1, Student s2){
	return strcmp(s1.name, s2.name) < 0;
}