#include <bits/stdc++.h>
using namespace std;
int main()
{
    int max_A = 1e6;
    vector<bool> sieve(max_A + 3, true);

    sieve[0] = false;
    sieve[1] = false;

    for (int i = 2; i * i <= max_A; i++)
    {
        if (sieve[i])
            for (int j = i * i; j <= max_A; j += i)
            {
                sieve[j] = false;
            }
    }
    vector<int> min_prime(max_A, 1);
    for (int i = 2; i <= max_A; i++)
    {
        if (sieve[i])
            for (int j = i; j <= max_A; j += i)
                min_prime[j] = i;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int x; cin>>x;
        int ans=1;
        while(x>1)
        {
            int cur_prime=min_prime[x];
            int cnt=0;
            while(x>1 && cur_prime==min_prime[x])
            {
                cnt++;
                x/=cur_prime;
            }
            ans*=(cnt+1);
        }
        cout<<ans<<"\n";
    }

    return 0;
}