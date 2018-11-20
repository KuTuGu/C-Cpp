#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <map>
#include <algorithm>
using namespace std;
struct pat
{
    char num[7],school[7];
    int af,bf,tf,snum,f;
}s[100001];
int n,c,f;
char num[7],school[7];
map<string,int> q;
bool cmp(pat a,pat b)
{
    if(a.f == b.f)
    {
        if(a.snum == b.snum)
        {
            return strcmp(a.school,b.school) < 0;
        }
        return a.snum < b.snum;
    }
    return a.f > b.f;
}
void low(char *t)
{
    for(int i = 0;t[i];i ++)
    t[i] = tolower(t[i]);
}
int main()
{
    scanf("%d",&n);
    for(int i = 0;i < n;i ++)
    {
        scanf("%s%d%s",num,&f,school);
        low(school);
        if(!q[school])q[school] = ++ c,strcpy(s[c].school,school);
        s[q[school]].snum ++;
        if(num[0] == 'A')s[q[school]].af += f;
        else if(num[0] == 'B')s[q[school]].bf += f;
        else s[q[school]].tf += f;
    }
    for(int i = 1;i <= c;i ++)
    {
        s[i].f = s[i].af + s[i].bf / 1.5 + s[i].tf * 1.5;
    }
    sort(s + 1,s + c + 1,cmp);
    int d = 1;
    printf("%d\n",c);
    for(int i = 1;i <= c;i ++)
    {
        if(s[i].f != s[i - 1].f)d = i;
        printf("%d %s %d %d\n",d,s[i].school,s[i].f,s[i].snum);
    }
}
/*
第四、五测试点超时Σ( ° △ °|||)︴
#include <iostream>
#include <algorithm>
#include <cctype>
#include <vector>
#include <map>
using namespace std;

struct School{
    //T、A、B
    int score[3], num, aver;
    string name;
    School(){}
    School(string ticket, int score, string school){
        this->name = school;
        switch(ticket[0]){
            case 'T': (this->score)[0] = score;(this->score)[1] = (this->score)[2] = 0;break;
            case 'A': (this->score)[1] = score;(this->score)[0] = (this->score)[2] = 0;break;
            case 'B': (this->score)[2] = score;(this->score)[0] = (this->score)[1] = 0;break;
            default: break;
        }
        this->num = 1;
    }
};
//排序函数
bool cmp(struct School a, struct School b);

int main()
{
    int N, score;
    string ticket, school;
    cin >> N;
    map<string, School> arr;
    vector<School> vec;

    for(int i = 0;i < N;i++){
        cin >> ticket >> score >> school;
        int len = school.length();
        for(int j = 0;j < len;j++)
            school[j] = tolower(school[j]);
        //未访问
        if(arr.find(school) == arr.end()){
            arr[school] = School(ticket, score, school);
        }
        else{
            arr[school].num++;
            switch(ticket[0]){
                case 'T': (arr[school].score)[0] += score;break;
                case 'A': (arr[school].score)[1] += score;break;
                case 'B': (arr[school].score)[2] += score;break;
                default: break;
            }
        }
    }
    //遍历map，求平均值，复制到vector排序
    map<string, School>::iterator iter;
    for(iter = arr.begin();iter != arr.end();iter++){
        (iter->second).aver = (int)((iter->second).score[0] * 1.5 + (iter->second).score[1] + (iter->second).score[2] / 1.5);
        vec.push_back(iter->second);
    }

    //map不能排序
    sort(vec.begin(), vec.end(), cmp);
    int n = vec.size(), 
        rank,    
        pre = -1;//记录前一个成绩
    cout << n << endl;

    for(int i = 0;i < n;i++){
        //rank不是延续上一个，就是坐标加1
        if(pre != vec[i].aver)
            rank = i + 1;
        pre = vec[i].aver;
        cout << rank << " " << vec[i].name << " " << vec[i].aver << " " << vec[i].num << endl;
    }
    return 0;
}
bool cmp(struct School a, struct School b){
    //降序
    if(a.aver != b.aver)
        return a.aver > b.aver;
    //升序
    else if(a.num != b.num)
        return a.num < b.num;
    //升序
    else    
        return a.name < b.name;
}
*/