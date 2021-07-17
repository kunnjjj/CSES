
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float long double
void solve()
{
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, S;
    cin >> n >> S;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    sort(A.begin(), A.end());

    vector<int> dp(S + 1, 0);
    int M = 1e9 + 7;
    dp[0] = 1;
    for (int i = 1; i <= S; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - A[j] < 0)
                break;
            dp[i] = (dp[i] % M + dp[i - A[j]] % M) % M;
        }
    }
    cout << dp[S] << endl;

    return 0;
}