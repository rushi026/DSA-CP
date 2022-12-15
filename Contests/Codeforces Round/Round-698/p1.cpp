/*
    Problem:            A. Nezzar and Colorful Balls
    Problem link:       https://codeforces.com/contest/1478/problem/A
    Contest:            Codeforces Round #698
    Date:               28/01/2021
    Last Updated:       28/01/2021
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
    ll i, c = 0;
    loop(i,1,n,1)
    {
        if(v[i] == v[i-1] + 1)
        {
            v[i] = 0;
        }
        else
        {
            c++;
        }
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
