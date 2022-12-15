/*
    Problem:            C. Omkar and Waterslide
    Problem link:       https://codeforces.com/contest/1392/problem/C
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
    ll n,i;
    cin>>n;
    vll v(n);
    scan(v);
    ll temp = v[n-1], ans = 0;
    rloop(i,n-2,0,1)
    {
        if(v[i] <= v[i+1])
            temp = v[i];
        else
        {
            ans += (v[i] - temp);
            temp = v[i];
        }
    }
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
