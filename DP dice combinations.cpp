#include<bits/stdc++.h>
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin>>n;
    vector<int> dp(n+1,0);
    dp[0]=1;
    int m=1e9+7;
    // when we reach at 0 this means that we have successfully found an ans,
    // for any other number,we can make a jump from of magnitude 1..6
    // and our 
    // ans[n]= ans[n-1] + ans[n-2] + ans[n-3] + ans[n-4] + ans[n-5] + ans[n-6]

    for(int i=1;i<=n;i++)
    {
 
        for(int j=1;j<=6 && i-j>=0;j++)
        {
            dp[i]=(dp[i]%m+dp[i-j]%m)%m;
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}