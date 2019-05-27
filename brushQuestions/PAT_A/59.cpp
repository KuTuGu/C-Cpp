#include <iostream>
#include <cmath>
#include <map>
using namespace std;

map<int, int> result;
map<int, int>::iterator it;
bool isPrime(int number);
int tailRecursionDecompose(int number);

int main(){
    long digit;
    cin >> digit;
    tailRecursionDecompose(digit);

    cout << digit << "=";
    for(it = result.begin();it != result.end();it++){
        if(it != result.begin()){
            cout << "*";
        }
        cout << it->first;
        if(it->second > 1){
            cout << "^" << it->second;
        }
    }

    return 0;
}

bool isPrime(int number){
    for(int i = 2;i <= sqrt(number);i++){
        if(!(number % i)){
            return false;
        }
    }
    return true;
}
int tailRecursionDecompose(int number){
    if(isPrime(number)){
        result[number]++;
    }
    else{
        for(int i = sqrt(number);i >= 2;i--){
            if((number % i == 0) && isPrime(i)){
                result[i]++;
                return tailRecursionDecompose(number / i);
            }
        }
    }
    return 0;
}