/*
运行超时，考虑空间替换时间
*/
#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main(){
    int map[100005], vst[100005] = {0};
    int add1, add2, n;

	memset(map, -1, sizeof(map));
	cin >> add1 >> add2 >> n;

	for (int i = 0; i < n; i++){
		int a, b; char ch;
		cin >> a >> ch >> b;
		map[a] = b;
	}

	while (add1 != -1){
		vst[add1] = 1;
		add1 = map[add1];
	}

	while (add2 != -1 && !vst[add2]){
		add2 = map[add2];
	}
	if (add2 == -1)
		cout << -1 << endl;
	else
		cout << setfill('0') << setw(5) << add2 << endl;
}
// #include <iostream>
// #include <iomanip>
// #include <vector>

// using namespace std;

// struct Node{
//     Node(){}
//     Node(int a, int b){
//         now = a;
//         next = b;
//     }
//     int now, next;
// };

// int main()
// {
//     int start1, start2, N;
//     int now, next;
//     char c;
//     vector<Node> nodeList;
//     vector<Node>::iterator it;

//     cin >> start1 >> start2 >> N;

//     for(int i = 0;i < N;i++){
//         cin >> now >> c >> next;
//         if(now == start1){
//             start1 = next;
//         }
//         else if(now == start2){
//             start2 = next;
//         }
//         else{
//             nodeList.push_back(Node(now, next));
//         }
//     }

//     while(start1 != -1){
//         for(it = nodeList.begin();it != nodeList.end();){
//             if(it->now == start1){
//                 start1 = it->next;
//                 it = nodeList.erase(it);
//             }
//             else{
//                 it++;
//             }
//         }
//     }

//     while(start2 != -1){
//         int flag = 0;
//         for(it = nodeList.begin();it != nodeList.end();){
//             if(it->now == start2){
//                 flag = 1;
//                 start2 = it->next;
//                 it = nodeList.erase(it);
//             }
//             else{
//                 it++;
//             }
//         }
//         if(!flag){
//             cout << setfill('0') << setw(5) << start2 << endl;
//             break;
//         }
//     }

//     if(start2 == -1){
//         cout << -1 << endl;
//     }

//     return 0;
// }
