#include <iostream>
#include<algorithm>

using namespace std;
int main() 
{
    int total_weight = 5;   //�������� 
    int w[6] = { 0,3,2,1};  //�������� 
    int v[6] = { 0,1,2,3};//������ֵ 
    int dp[11] = { 0 };//��ʾǰi����Ʒ����һ��Ϊj�����ı�����õ�����ֵ��
    for (int i = 1; i <= 3; i++)
        for (int j = w[i]; j <= 5;j++)
                dp[j] = max(dp[j],dp[j - w[i]] + v[i]);
    cout << "�ܵļ�ֵΪ: " << dp[5] << endl;
    return 0;
}
