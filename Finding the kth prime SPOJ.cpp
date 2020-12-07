#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
vi primes;
const int _max=90000001;
bool isprimes[_max];
void isSieve()
{
    isprimes[0]=true;
    isprimes[1]=true;
    //true for composite
    //false for primes
    ll _maxx=90000000;
    for(ll i=2;i*i<_maxx;i++)
    {
        if(isprimes[i]==false)
        {
            //if i is the prime number 
            //then set all its multiples to composite 
            for(ll j=i*i;j<=_maxx;j+=i)
            {
                isprimes[j]=true;
            }
        }
    }

        for(ll i=2;i<=_maxx;i++)
        {
            if(isprimes[i]==false)
            {
                primes.push_back(i);
            }

        }

}
int main()
{
    int t;
    cin>>t;
    isSieve();
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<primes[n-1]<<endl;
    }
}