#include <iostream>
#include <vector>
using namespace std;

struct TreeSequence{
    int data;
    TreeSequence *leftChildNode;
    TreeSequence *rightChildNode;
}*treeSequence = new TreeSequence();

vector<int> postorderTraversalTree;

int preorderConstructTree(TreeSequence *node, vector<int> data, int isMirror);
void postorderConstructTree(TreeSequence *node);

int main() {
    int N = 0, isMirror = 0;
    cin >> N;
    vector<int> inputData(N, 0);
    for(int i = 0;i < N;i++){
        cin >> inputData[i];            
    }

    if(inputData.size() == 1){
        cout << "YES\n" << inputData[0] << endl;
        return 0;
    }
    /*maybe the mirror image*/
    else if((inputData[1] >= inputData[0]) && (inputData.back() < inputData[0])){
        isMirror = 1;
    }

    if(preorderConstructTree(treeSequence, inputData, isMirror)){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        postorderConstructTree(treeSequence);
        for(size_t i = 0;i < postorderTraversalTree.size() - 1;i++){
            cout << postorderTraversalTree[i] << " ";
        }
        cout << postorderTraversalTree.back() << endl;
    }

    return 0;
}

/*if the result is zero, print YES*/
int preorderConstructTree(TreeSequence *node, vector<int> data, int isMirror){
    if(!node){
        return 0;
    }
    if(data.size() == 1){
        node->data = data[0];
        node->leftChildNode = nullptr;
        node->rightChildNode = nullptr;
    }
    else{
        vector<int> leftNodes, rightNodes;
        size_t i = 1;

        /*construct the leftNodes and rightNodes*/
        if(!isMirror){
            for(i = 1;i < data.size();i++){
                if(data[i] >= data[0]){
                    break;
                }
                leftNodes.push_back(data[i]);   
            }
            while(i < data.size()){
                if(data[i] < data[0]){
                    return 1;
                }
                rightNodes.push_back(data[i]);
                i++;   
            }
        }
        else{
            for(i = 1;i < data.size();i++){
                if(data[i] < data[0]){
                    break;
                }
                leftNodes.push_back(data[i]);   
            }
            while(i < data.size()){
                if(data[i] >= data[0]){
                    return 1;
                }
                rightNodes.push_back(data[i]);
                i++;   
            }
        }

        /*Determine if there are child nodes*/
        node->data = data[0];
        node->leftChildNode = leftNodes.size() ? new TreeSequence() : nullptr;
        node->rightChildNode = rightNodes.size() ? new TreeSequence() : nullptr;

        return preorderConstructTree(node->leftChildNode, leftNodes, isMirror) + 
               preorderConstructTree(node->rightChildNode, rightNodes, isMirror);
    }

    return 0;
}
void postorderConstructTree(TreeSequence *node){
    if(node){
        postorderConstructTree(node->leftChildNode);
        postorderConstructTree(node->rightChildNode);
        postorderTraversalTree.push_back(node->data);
    }
    return;
}