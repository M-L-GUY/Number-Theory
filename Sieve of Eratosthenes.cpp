#include<bits/stdc++.h>
using namespace std;
long long sieve[100001]={0};
void isSieve()
{
    //0 for prime and 
    //1 for non prime

    for(long long i=2;i*i<=100000;i++)
    {
        if(sieve[i]==0)
        {
            //means i is a prime number than set
            //all the multiples of i to non prime
            for(long long j=i*i;j<=100000;j+=i)
            {
                sieve[j]=1;
            }
        }
    }
}
int main()
{
    isSieve();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(sieve[n]==0)
        {
            cout<<"Prime"<<endl;

        }
        else
        cout<<"Not  prime"<<endl;
    }
}