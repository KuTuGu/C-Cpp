/*
Time out
narrow range：
    can't sort by age firstly，then new vector for sorting
    because m < < n，every age's maximum is m
    so can divide into pieces by age，whose maximum is m
link：https://www.liuchuo.net/archives/2255
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Person{
    string name;
    int age, netWorth;
};

bool ageCmp(Person a, Person b);
bool rangeCmp(Person a, Person b);
bool searchCmp(Person a, Person b);

int main()
{
    int N, K, M, aMin, aMax;
    cin >> N >> K;
    vector<Person> people(N);
    vector<Person>::iterator start, end;
    for(int i = 0;i < N;i++){
        cin >> people[i].name >> people[i].age >> people[i].netWorth;
    }
    sort(people.begin(), people.end(), ageCmp);
    for(int i = 1;i <= K;i++){
        cout << "Case #" << i << ":\n";
        cin >> M >> aMin >> aMax;
        Person a, b;
        a.age = aMin;
        b.age = aMax;
        start = lower_bound(people.begin(), people.end(), a, searchCmp);
        end = upper_bound(people.begin(), people.end(), b, searchCmp);
        if(start >= end){
            cout << "None" << endl;
        }
        else{
            vector<Person> rangeVec(start, end);
            sort(rangeVec.begin(), rangeVec.end(), rangeCmp);
            int len = min(int(rangeVec.size()), M);
            for(int j = 0;j < len;j++){
                cout << rangeVec[j].name << " " << rangeVec[j].age << " " << rangeVec[j].netWorth << endl;
            }
        }
    }
    return 0;
}

bool ageCmp(Person a, Person b){
    return a.age < b.age; 
}

bool rangeCmp(Person a, Person b){
    if(a.netWorth != b.netWorth){
        return a.netWorth > b.netWorth;
    }
    else if(a.age != b.age){
        return a.age < b.age;
    }
    else{
        return a.name < b.name;
    }
}

bool searchCmp(Person a, Person b){
    return a.age < b.age;
}