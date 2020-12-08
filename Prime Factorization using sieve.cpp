#include<bits/stdc++.h>
using namespace std;
int primes[1000001];
void sieve()
{
    int _max=1000000;
    for(int i=1;i<=_max;i++)
    {
        primes[i]=-1;
    }
    for(int i=2;i<=_max;i++)
    {
        if(primes[i]==-1)
        {
            for(int j=i;j<=_max;j+=i)
            {
                if(primes[j]==-1)
                {
                    primes[j]=i;
                }
            }
        }
    }
}

vector<int> prime_factor(int x)
{
    vector<int> v;
    while(x!=1)
    {
        v.push_back(primes[x]);
        x=x/primes[x];
    }
    return v;
}
int main()
{
    int t;
    cin>>t;
    sieve();
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v=prime_factor(n);
        for(int x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

