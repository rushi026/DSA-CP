/*
    Problem:            Omkar and Password
    Problem link:       https://codeforces.com/contest/1392/problem/A
    Contest:            Codeforces Global Round 10
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
    loop(i,0,n,1)
        cin>>v[i];
    map<ll,ll> m;
    loop(i,0,n,1)
        m[v[i]]++;
    if(m[v[0]] == n)
        cout<<n<<endl;
    else
        cout<<1<<endl;
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
