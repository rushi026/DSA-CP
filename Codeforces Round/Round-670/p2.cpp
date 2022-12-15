/*
    Problem:            xyz
    Problem link:       https://codeforces.com/contest/1406/problem/B
    Contest:            Codeforces Round #670 (Div. 2)
    Date:               12/09/2020
    Last Updated:       12/09/2020
    Author:             Rushiraj Parekh
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll                  long long int
#define ull                 unsigned long long int
#define loop(i,x,y,z)       for(ll i=x; i<y; i+=z)
#define rloop(i,x,y,z)      for(ll i=x; i>=y; i-=z)
#define endl                '\n'
#define vll                 vector<ll>
#define scan(v)             for(auto &i : v) cin>>i;
#define print(v)            for(auto i : v) cout<<i<<" ";
#define pb                  push_back
#define all(x)              x.begin(),x.end()
#define _sort(x)            sort(all(x))
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


/***********************************/
void solve()
{
    ll n;
    cin>>n;
    vll v(n);
    ll i,pos=0,ans=1;
    loop(i,0,n,1)
    {
        cin>>v[i];
        if(v[i]>0)
            pos++;
    }
    _sort(v);
    if(v[n-1] == 0)
    {
        cout<<0<<endl;
        return;
    }
    if(pos>=5)
    {
        ll j;
        rloop(j,n-1,n-5,1)
            ans *= v[j];
        cout<<ans<<endl;
        return;
    }
    if(pos>0)
    {
        if(pos&1)
        {
            ll j=n-1;
            ll x=0;
            while(pos--)
            {
                ans *= v[j--];
                x++;
            }
            ll temp = 5-x;
            j = 0;
            while(temp--)
            {
                ans *= v[j++];
            }

        }
        else
        {
            ll j=(n-1);
            pos--;
            ll x=0;
            while(pos--)
            {
                ans *= v[j--];
                x++;
            }

            ll temp = 5-x;
            j = 0;
            while(temp--)
            {
                ans *= v[j++];
            }
        }
        cout<<ans<<endl;
        return;
    }
    ll temp = 5;
    ll j = 0;
    while(temp--)
        ans *= v[j++];
    cout<<ans<<endl;
}

/***********************************/
int main()
{
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
