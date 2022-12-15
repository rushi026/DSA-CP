/*
    Problem:            A. Subset Mex
    Problem link:       https://codeforces.com/contest/1406/problem/0
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
    scan(v);
    _sort(v);
    if(v[0] != 0)
    {
        cout<<0<<endl;
        return;
    }
    if(v[1] != 0)
    {
        ll i=1;
        while(true)
        {
            if(v[i] == i) {}
            else
            {
                cout<<i<<endl;
                return;
            }
            i++;
        }
        return;
    }
    ll i=0;
    ll k=(-1);
    ll x=0,y=0;
    bool temp = true;
    loop(i,0,n,1)
    {
        k++;
        if(temp)
        {
            if(v[i] == k)
            {
                if(v[i+1] == k)
                    i++;
                else
                {
                    x=k;
                    temp = false;
                }
            }
            else
            {
                cout<<k*2<<endl;
                return;
            }
        }
        else
        {
            k--;
            ll j;
            loop(j,i,n,1)
            {
                k++;
                if(v[j] == k)
                {
                    if(v[j+1] == k)
                    {
                        j++;
                    }
                }
                else
                {
                    y=k;
                    cout<<x+y<<endl;
                    return;
                }
            }
        }
    }
    y = v[n-1]+1;
    cout<<x+y<<endl;
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
