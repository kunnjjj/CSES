#include<bits/stdc++.h>
using namespace std;
int power(int a,int b,int M)
{
    
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
    while (t--)
    {
        int M=1e9+7;
        int a,b,c; cin>>a>>b>>c;
        int d=power(b,c,M-1);
        cout<<power(a,d,M)<<endl;
        /* code */
    }
    



    return 0;
}