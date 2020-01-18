#include <iostream>
#include<algorithm>

using namespace std;
int main() 
{
    int total_weight = 5;   //背包容量 
    int w[6] = { 0,3,2,1};  //背包重量 
    int v[6] = { 0,1,2,3};//背包价值 
    int dp[11] = { 0 };//表示前i件物品放入一个为j容量的背包获得的最大价值，
    for (int i = 1; i <= 3; i++)
        for (int j = w[i]; j <= 5;j++)
                dp[j] = max(dp[j],dp[j - w[i]] + v[i]);
    cout << "总的价值为: " << dp[5] << endl;
    return 0;
}
