#include<bits/stdc++.h>
using namespace std;
int func(int a,int b)
{
    int M=1e9+7;
    int p=a;
    int res=1;
    while(b>0)
    {
        if(b&1)
        {
            res=(1LL * res * p) %M;
        }
        p=(1LL * p * p)%M;
        b>>=1;
    }
    return res;
}
int main()
{

    int t; cin>>t;
    while(t--)
    {
        int a,b; cin>>a>>b;
        cout<<func(a,b)<<"\n";
    }


    return 0;
}