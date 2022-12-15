/*
    Problem:            A. Cancel the Trains
    Problem link:       http://codeforces.com/contest/1453/problem/A
    Contest:            Codeforces Round #688 (Div. 2)
    Date:               12/04/2020
    Last Updated:       10/04/2020
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
    ll n,m,ans=0;
    cin>>n>>m;
    vll a(n), b(m);
    scan(a);
    ll i;
    loop(i,0,m,1) {
        cin>>b[i];
        ll j;
        loop(j,0,n,1) {
            if(b[i] == a[j]) {
                ans++;
                break;
            }
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
