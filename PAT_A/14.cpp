/*
用容器大量储存数据
因为最后的用户和之前的用户都有关联(黄线外)，所以不可能只算一个，必须全部求出每个数据
唯一的优化是可以先求出最后用户(是q里面最大的，不是最后的)的位置，之后的用户不用再算
*/
#include <iostream>
#include <iomanip>
#include <queue>
#include <vector>
using namespace std;

//是每列窗口的数据(第一个用户结束，最后一个用户结束，整列用户时间)
struct node {
    int poptime, endtime;
    queue<int> q;
};
int main() {
    int n, m, k, q, index = 1;
    cin >> n >> m >> k >> q;

    //time储存每个用户的时间，result储存每个用户的结束时间，check储存检查的用户
    vector<int> time(k + 1),
                result(k + 1),
                check(q + 1);

    for(int i = 1; i <= k; i++)
        cin >> time[i];
    
    //window储存每列窗口，sorry储存用户是否可以被服务
    vector<node> window(n + 1);
    vector<bool> sorry(k + 1, false);

    //储存数据
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(index <= k) {
                window[j].q.push(time[index]);

                if(window[j].endtime >= 540)
                    sorry[index] = true;
                window[j].endtime += time[index];

                if(i == 1)
                    window[j].poptime = window[j].endtime;
                result[index++] = window[j].endtime;
            }   
        }
    }
    //储存检查的用户
    int flag = 1;
    for(int i = 1; i <= q; i++){
        cin >> check[i];
        if(check[i] > flag)
            flag = check[i];
    }

    //用于超出黄线的用户(不用全部计算)
    while(index <= flag){
        //找出最小时间窗口
        int tempmin = window[1].poptime, tempwindow = 1;
        for(int i = 2; i <= n; i++) {
            if(window[i].poptime < tempmin) {
                tempwindow = i;
                tempmin = window[i].poptime;
            }
        }
        //更换数据
        window[tempwindow].q.pop();
        window[tempwindow].q.push(time[index]);
        window[tempwindow].poptime +=  window[tempwindow].q.front();
        if(window[tempwindow].endtime >= 540)
            sorry[index] = true;
        window[tempwindow].endtime += time[index];
        result[index++] = window[tempwindow].endtime;
    }
    for(int i = 1; i <= q; i++){
        int flag = check[i],
            minute = result[flag];

        if(sorry[flag] == true)
            cout << "Sorry\n";
        else
            cout << setw(2) << setfill('0') << minute / 60 + 8 << ':' << setw(2) << setfill('0') << minute % 60 << endl;
    }
    return 0;
}
