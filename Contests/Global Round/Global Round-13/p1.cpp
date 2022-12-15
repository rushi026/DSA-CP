/*
    Problem:            A. K-th Largest Value
    Problem link:       https://codeforces.com/contest/1491/problem/A
    Contest:            Codeforces Global Round 13
    Date:               28/02/2021
    Last Updated:       28/02/2021
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
    ll n,q;
    cin>>n>>q;
    vll a(n);
    scan(a);
    ll i;
    loop(i,0,q,1)
    {
        ll t;
        cin>>t;
        if(t == 1)
        {
            ll x;
            cin>>x;
            a[x-1] = (1-a[x-1]);
        }
        if(t == 2)
        {
            ll k;
            cin>>k;
            vll b = a;
            _sort(b);
            cout<<b[n-k]<<endl;
        }
    }
}   

/***********************************/
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("D:/Programming/codeforces/Contests/input.txt", "r", stdin);
        freopen("D:/Programming/codeforces/Contests/output.txt", "w", stdout);
    #endif

    speedy;
    ll t=1;
    //cin>>t;
    while(t--)
        solve();
    return 0;
}
