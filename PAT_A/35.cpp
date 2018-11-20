#include <iostream>
#include <vector>

using namespace std;

int main(){
	int N;
	vector<string> name, value;
	cin >> N;

	for(int i = 0;i < N;i++){
		string str1, str2;
		int flag = 0;
		cin >> str1 >> str2;

		for(size_t j = 0;j < str2.length();j++){
			if(str2[j] == '1' || str2[j] == 'l' || str2[j] == '0' || str2[j] == 'O'){
				switch(str2[j]){
					case '1': str2[j] = '@'; break;
					case 'l': str2[j] = 'L'; break;
					case '0': str2[j] = '%'; break; 
					case 'O': str2[j] = 'o'; break;
					default: break;
				}
				flag = 1;
			}
		}

		if(flag){
			name.push_back(str1);
			value.push_back(str2);
		}
	}

	int num = value.size();

	if(!num){
		if(N == 1){
			cout << "There is " << N << " account and no account is modified\n";
		}
		else{
			cout << "There are " << N << " accounts and no account is modified\n";
		}
	}
	else{
		cout << num << endl;
		for(int i = 0;i < num;i++){
			cout << name[i] << " " << value[i] << endl;
		}
	}
    return 0;
}
