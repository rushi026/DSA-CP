/*
	Problem link: https://codeforces.com/contest/1352/problem/B
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        int k;
        cin>>n>>k;
        if(n == k)
        {
            cout<<"YES"<<endl;
            for(int i=1;i<=k;i++)
                cout<<1<<" ";
            cout<<endl;
            continue;
        }
        if(n<k)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(n&1 && (!(k&1)))
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(n&1 && k&1)
        {
            cout<<"YES"<<endl;
            ll sum=0;
            for(int i=1;i<=k-1;i++)
            {
                cout<<1<<" ";
                sum++;
            }
            cout<<n-sum<<endl;
            continue;
        }
        if((!(n&1)) && (!(k&1)))
        {
            cout<<"YES"<<endl;
            ll sum=0;
            for(int i=1;i<=k-1;i++)
            {
                cout<<1<<" ";
                sum++;
            }
            cout<<n-sum<<endl;
            continue;
        }
        if((!(n&1)) && k&1)
        {
            ll sum=0;
            for(int i=1;i<=k-1;i++)
            {
                sum+=2;
            }
            if(sum>=n)
            {
                cout<<"NO"<<endl;
                continue;
            }
            else
            {
                cout<<"YES"<<endl;
                for(int i=1;i<=k-1;i++)
                    cout<<2<<" ";
                cout<<n-sum<<endl;
            }
        }
    }
    return 0;
}
