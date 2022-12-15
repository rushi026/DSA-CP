/*
    Problem:            A. Distance and Axis
    Problem link:       https://codeforces.com/contest/1401/problem/A
    Contest:            Codeforces Round #665 (Div. 2)
    Date:               21/08/2020
    Last Updated:       21/08/2020
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
    ll n,k;
    cin>>n>>k;
    if(n == 0)
    {
        cout<<k<<endl;
        return;
    }
    if(k == 0)
    {
        if(n&1)
            cout<<1<<endl;
        else
            cout<<0<<endl;
        return;
    }
    if(n == k)
    {
        cout<<0<<endl;
        return;
    }
    if(n<k)
    {

    }
    if(n>k)
    {
        cout<<k<<endl;
        return;
    }
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
