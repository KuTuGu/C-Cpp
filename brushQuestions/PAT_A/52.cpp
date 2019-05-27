#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Node{
    int address, data, next;
    bool isNode = false;
}nodes[100000];

bool cmp(Node node1, Node node2);

int main(){
    int N, startAddress, count = 0;
    cin >> N >> startAddress;
    for(int i = 0;i < N;i++){
        int address;
        cin >> address >> nodes[address].data >> nodes[address].next;
        nodes[address].address = address;
    }
    while(startAddress != -1){
        nodes[startAddress].isNode = true;
        startAddress = nodes[startAddress].next;
        count++;
    }
    if(!count){
        cout << "0 -1\n";
        return 0;
    }
    sort(nodes, nodes + 100000, cmp);
    cout << count << " " << setfill('0') << setw(5) << nodes[0].address << endl;
    for(int i = 0;i < count - 1;i++){
        cout << setfill('0') << setw(5) << nodes[i].address << " " << nodes[i].data << " " << setw(5) << nodes[i + 1].address << endl;
    }
    cout << setfill('0') << setw(5) << nodes[count - 1].address << " " << nodes[count - 1].data << " -1" << endl;

    return 0;
}

bool cmp(Node node1, Node node2){
    return (!node1.isNode || !node2.isNode) ? (node1.isNode > node2.isNode) : (node1.data < node2.data);
}