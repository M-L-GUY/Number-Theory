#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll bin_pow(ll a,ll b)
{
    if(b==0)
    {
        return 1;
    }
    ll res=bin_pow(a,b/2);
    if(b%2==0)
    {
        return res*res;
    }
    return res*res*a;
}
ll bin_pow_iterative(ll a,ll b)
{
    ll res=1;
    while(b>0)
    {
        if(b&1)
        {
            res*=a;
        }
        a*=a;
        b>>=1;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<bin_pow(a,b)<<endl;
        cout<<bin_pow_iterative(a,b)<<endl;
    }
    return 0;
}