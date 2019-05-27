/*scanf/printf is faster than cin/cout originally*/
#include <stdio.h>
#include <map>
using namespace std;

int main()
{
    int M, N, num;
    map<int, int> numCnt;
    scanf("%d %d", &M, &N);
    int half = M * N / 2;
    for(int i = 0;i < N;i++){
        for(int j = 0;j < M;j++){
            scanf("%d", &num);
            numCnt[num]++;
            if(numCnt[num] > half){
                printf("%d", num);
                return 0;
            }
        }
    }

    return 0;
}