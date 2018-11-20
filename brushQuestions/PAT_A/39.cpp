/*
cin、cout会超时，改用scanf、char*，散列表
*/
#include <stdio.h>
#include <set>
#include <map>

using namespace std;

int getID(char* str);

int main(){
	map< int, set<int> > stu;
	set<int>::iterator it;
	int N, K;
	scanf("%d %d",&N, &K);
	for(int i = 0;i < K;i++){
		int id, num;
		scanf("%d %d",&id, &num);

		for(int j = 0;j < num;j++){
			char name[5];
			scanf("%s",name);

			stu[getID(name)].insert(id);
		}
	}

	for(int i = 0;i < N;i++){
		char name[5];
		scanf("%s",name);
		printf("%s %lu",name, stu[getID(name)].size());
		for(it = stu[getID(name)].begin();it != stu[getID(name)].end();it++){
			printf(" %d", *it);
		}
		puts("");
	}

	return 0;
}

int getID(char* str){
	return (str[0] - 'A') * 26 * 26 * 10 + (str[1] - 'A') * 260 + (str[2] - 'A') * 10 + str[3] - '0';
}
