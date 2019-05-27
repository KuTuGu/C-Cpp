#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N;
    vector<int> distance(N + 1, 0), spaceBetweenFirst(N + 1, 0);
    for(int i = 1;i <= N;i++){
        cin >> distance[i];
        spaceBetweenFirst[i] = spaceBetweenFirst[i - 1] + distance[i - 1];
    }
    cin >> M;
    for(int i = 0;i < M;i++){
        int end, start;
        cin >> end >> start;
        int small = start < end ? start : end,
            big = start >= end ? start : end,
            positiveDistance = spaceBetweenFirst[big] - spaceBetweenFirst[small],
            reverseDistance = spaceBetweenFirst[N] + distance[N] - positiveDistance,
            result = positiveDistance > reverseDistance ? reverseDistance : positiveDistance;

        cout << result << endl;
    }

    return 0;
}
