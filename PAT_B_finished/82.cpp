#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N, ID, x, y,
        max = 0,
        min = 20000,
        maxID, minID;
    cin >> N;

    for(int i = 0;i < N;i++){
        cin >> ID >> x >> y;
        if(x * x + y * y < min){
            min = x * x + y * y;
            minID = ID;
        }
        if(x * x + y * y > max){
            max = x * x + y * y;
            maxID = ID;
        }
    }
    cout << setfill('0') << setw(4) << minID << " " << setfill('0') << setw(4) << maxID << endl;
    return 0;
}