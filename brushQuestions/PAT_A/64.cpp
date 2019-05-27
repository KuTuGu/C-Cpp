#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int pro[1010],in[1010];
int n, index = 0;
void inOrder(int root);

int main(){
    scanf("%d", &n);
    for(int i = 0;i < n;i++){
        scanf("%d", &pro[i]);
    } 
    sort(pro, pro + n);
    inOrder(1);
    printf("%d", in[1]);
    for(int i = 2;i <= n;i++){
        printf(" %d", in[i]);
    }
    return 0;
} 

void inOrder(int root){
    if(root > n){
        return;
    }
    inOrder(root * 2);
    in[root] = pro[index++];
    inOrder(root * 2 + 1);
}