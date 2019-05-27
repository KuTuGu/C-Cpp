#include <iostream>
#include <cstring>
using namespace std;

char s1[10001], s2[10001];

int main() {
    cin.getline(s1, 10001);
    cin.getline(s2, 10001);
    bool flag[256] = {false};
    for(size_t i = 0; i < strlen(s2); i++){
        flag[int(s2[i])] = true;
    }
    for(size_t i = 0; i < strlen(s1); i++) {
        if(!flag[int(s1[i])]){
            cout << s1[i];
        }
    }
    return 0;
}
