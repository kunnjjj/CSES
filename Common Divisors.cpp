#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int max_a=1e6;
    vector<int> A(max_a+3);
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        A[x]++;
    } 
    int ans=1;
    for(int i=1;i<=max_a;i++)
    {
        int cnt=0;
        for(int j=i;j<=max_a;j+=i)
        {
            cnt+=A[j];
        }
        if(cnt>=2) ans=max(ans,i);
    }
    cout<<ans<<"\n";




    return 0;
}