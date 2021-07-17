#include<bits/stdc++.h>
using namespace std;
int func(int n,int k)
{
    if(n==1) return 1;

    if(k <=(n+1)/2)
    {
        if(2 * k> n) return (2* k) %n;
        return 2 * k;
    }
    int half_ans=func((n)/2,k-(n+1)/2);
    if(n&1) return half_ans * 2 +1;
    else  return half_ans * 2 -1 ;
}
int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        cout<<func(n,k)<<"\n";
    }

    //     // [1,2,3,4,5,6,7,8,9,10]
    //     1 2  3 4 5 
    //     [1,3,5,7,9]
    //     [1,3,5,7,9,11]
    //      1 2 3 4 5 6

    //     2 * 
    //     // 2 4 6 8 10

    //     // 3rd number in 

    //     // [1,3,5,7,9,11] renamed as [1,2,3,4,5,6]
    //     // 6 -> 









    // // k <= size /2 
    // // then print k* 2
    // // diff =2 
    // // diff = 4
    // // diff= 8
    // // size/2 + size /4 + size /8 .....
    // // k= 8 

    // // // 6 i will get in the first time
    // // // now how to progress?
    // // // 12/2 first time
    // // // 12 / 4 this time
    // // //  12 / 8 next time...

    // // 2,4,6,8,10,12
    // // [1,3,5,7,9,11]
    // // 3, 7, 11

    // // [1,5]















    // // [1,2,3,4,5,6,7,8,9,10,11]
    // // 2
    // // 4
    // // 6
    // // 8 
    // // 10
    
    // // [1,3,5,7,9,11]
    // // now  1 is to be removed
    // // 1
    // // 5 
    // // 9
    // // [3,7,11]
    // // 3 is to be removed
    // // 3 
    // // 11




    return 0;
}