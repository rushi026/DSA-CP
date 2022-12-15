/*
    Problem:            B. Omkar and Infinity Clock
    Problem link:       https://codeforces.com/contest/1392/problem/B
    Contest:            Omkar and Infinity Clock
    Date:               17/08/2020
    Last Updated:       17/08/2020
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
#define pb                  push_back
#define all(x)              x.begin(),x.end()
#define _sort(x)            sort(all(x))
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


/***********************************/
void solve()
{
    ll n,k;
    cin>>n>>k;
    vll v(n);
    scan(v);
    if(n == 1)
    {
        cout<<0<<endl;
        return;
    }
    ll _max = *max_element(all(v));
    loop(i,0,n,1)
        v[i] = _max - v[i];
    if(k&1)
    {
        loop(i,0,n,1)
            cout<<v[i]<<" ";
        cout<<endl;
        return;
    }
    _max = *max_element(all(v));
    loop(i,0,n,1)
        v[i] = _max - v[i];
    loop(i,0,n,1)
        cout<<v[i]<<" ";
    cout<<endl;
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
