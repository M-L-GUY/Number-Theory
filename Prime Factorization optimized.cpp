#include<bits/stdc++.h>
using namespace std;
void primefact(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        int cnt=0;
        if(n%i==0)
        {
            while(n%i==0)
            {
                cnt++;
                n=n/i;
            }
            cout<<"("<<i<<"^"<<cnt<<")";
        }
    }
        if(n>1)
        {
            cout<<"("<<n<<"^"<<1<<") "<<endl;
        }
    }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        primefact(n);
    }
}