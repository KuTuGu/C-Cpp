#include <iostream>
#include <map>

using namespace std;

struct student{
	string name, ID;
	student(){};
	student(string a, string b){
		name = a;
		ID = b;
	};
};
int main(){
	map<int, student> fStu, mStu;
	int N, flag = 0;
	cin >> N;

	for(int i = 0;i < N;i++){
		string name, ID;
		int grade;
		char gender;

		cin >> name >> gender >> ID >> grade;
		if(gender == 'F'){
			fStu[grade] = student(name, ID);
		}
		else{
			mStu[grade] = student(name, ID);
		}
	}

	if(!fStu.empty()){
		cout << ((--fStu.end())->second).name << " " << ((--fStu.end())->second).ID << endl;
	}
	else{
		cout << "Absent\n";
		flag = 1;
	}
	if(!mStu.empty()){
		cout << ((mStu.begin())->second).name << " " << ((mStu.begin())->second).ID << endl;
	}
	else{
		cout << "Absent\n";
		flag = 1;
	}
	if(flag){
		cout << "NA\n";
	}
	else{
		cout << (--fStu.end())->first - (mStu.begin())->first << endl;
	}

	return 0;
}
