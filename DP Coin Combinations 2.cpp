#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum;
    cin >> n >> sum;
    int M = 1e9 + 7;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    vector<int> dp(sum + 1, 0);
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s <= sum; s++)
        {
            dp[s] += (s - A[i] >= 0 ? dp[s - A[i]] : 0);
            dp[s] %= M;
        }
    }
    // for(int i=0;i<=sum;i++)
    // {
    //     cout<<"sum is"<<i<<endl;
    //     cout<<dp[i]<<endl;
    // }

    cout << dp[sum] << endl;

    return 0;
}