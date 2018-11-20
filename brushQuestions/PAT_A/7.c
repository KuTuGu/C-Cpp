/*新思路：（别人的haaaa～）
直接进行一次循环累加即可
难点：temp < 0 的情况
1.开头累加是temp<0，则temp=0可以跳过前面的负数
2.开头结尾都为正整数，中间有负数：
    a(前面正数累加),b(负数),c(后面正数累加)
    (1).|a|<|b|,则temp<0,所以清空，最后是sum(即a)和c比大小 
    (2).|a|>|b|,则temp>0,不需要考虑temp=0,最后结果一定是a+b+c
*/
#include <stdio.h>
int main() {
    int n,i;
    int v[10000] = {0};
    scanf("%d",&n);
    int leftindex = 0,rightindex = n - 1,sum = -1,temp = 0,tempindex = 0;
    for(i = 0;i < n;i++){
        scanf("%d",&v[i]);
        temp += v[i];
        if(temp < 0){
            temp = 0;
            tempindex = i + 1;
        } 
        else if (temp > sum){
            sum = temp;
            leftindex = tempindex;
            rightindex = i;
        }
    }
    if(sum < 0) 
        sum = 0;
    printf("%d %d %d", sum, v[leftindex], v[rightindex]);
    return 0;
}


/*测试点5，当0,负数全都在的时候，first和last应该都为0
测试点7，运行超时
*/
/*#include <stdio.h>
int main(){
    int K,i,j,max = 0,start,flag = 0;
    int begin,end;
    int data[10000] = {0};
    scanf("%d",&K);
    int left = K - 1,right = K - 1;
    for(i = 0;i < K;i++)
        scanf("%d",&data[i]);
    for(start = 0;start < K;start++){
        if(data[start] < 0)
            continue;
        for(i = 0;i < K;i++){
            if(data[K - i - 1] < 0)
                continue;
            int sum = 0;
            for(j = start;j < K - i;j++)
                sum += data[j];
            if(sum > max){
                flag = 1;
                max = sum;
                left = start;
                right = K - i - 1;
                begin = data[start];
                end = data[K - i - 1];
            }
            else if(sum == max){
                flag = 1;
                if(start <= left && K - i - 1 <= right){//不可能交错
                    begin = data[start];
                    end = data[K - i - 1];
                }
            }
        }
    }
    if(max >= 0 && flag)
        printf("%d %d %d",max,begin,end);
    else
        printf("0 %d %d",data[0],data[K - 1]);
    return 0;
}*/
