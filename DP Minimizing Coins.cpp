 
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define float long double
void solve()
{
 
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,T; cin>>n>>T;
    vector<int> val(n);
    for(int i=0;i<n;i++) cin>>val[i];
    int inf=1e9;
    vector<int> dp(T+1,inf);
    dp[0]=0;
    sort(val.begin(),val.end());
    for(int i=1;i<=T;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i-val[j]<0) break;
            dp[i]=min(dp[i],1+dp[i-val[j]]);
        //    dp[i]=min(dp[i],(i-val[j]>=0?1+dp[i-val[j]]:inf));
        }
        // cout<<endl;
    }
    // for(int i=0;i<=T;i++)
    // cout<<dp[i]<<" ";
    // cout<<endl;
 
    if(dp[T]==inf)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<dp[T]<<endl;
    }
    
 
    return 0;
}
 