/*测试点2 答案错误*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

struct Node{
    int weight;
    vector<int> childNodes = vector<int>();
};

vector<Node> nodes(101);
vector< vector<int> > results(1, vector<int>()), pathWeights;
vector<string> print;
vector<int> stack;
int cnt = 0, N, M, S;

void BFS();

int main()
{
    cin >> N >> M >> S;
    for(int i = 0;i < N;i++){
        cin >> nodes[i].weight;
    }
    for(int i = 0;i < M;i++){
        int nodeID, childNum, childID;
        cin >> nodeID >> childNum;
        for(int j = 0;j < childNum;j++){
            cin >> childID;
            nodes[nodeID].childNodes.push_back(childID);
        }
    }
    if(N){
        stack.push_back(0);
    }
    BFS();

    for(size_t i = 0;i < pathWeights.size();i++){
        if(accumulate(pathWeights[i].begin(), pathWeights[i].end(), 0) == S){
            string str = "";
            for(size_t j = 0;j < pathWeights[i].size();j++){
                if(j != pathWeights[i].size() - 1){
                    str += (to_string(pathWeights[i][j]) + " ");
                }
                else{
                    str += to_string(pathWeights[i][j]);
                }
            }
            print.push_back(str);
        }
    }

    sort(print.begin(), print.end());

    for(int i = print.size() - 1;i >= 0;i--){
        cout << print[i] << endl;
    }

    return 0;
}

void BFS(){
    while(stack.size()){
        int len = stack.size();
        for(int i = 0;i < len;i++){
            vector<int> weights(results[i]);
            weights.push_back(nodes[stack[i]].weight);
            for(size_t j = 0;j < nodes[stack[i]].childNodes.size();j++){
                stack.push_back(nodes[stack[i]].childNodes[j]);
                results.push_back(weights);
            }
            /*if have no child, save the path weight*/
            if(!nodes[stack[i]].childNodes.size()){
                pathWeights.push_back(weights);
            }
        }
        stack.erase(stack.begin(), stack.begin() + len);
        results.erase(results.begin(), results.begin() + len);
    }
}