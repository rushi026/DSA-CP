/*
    Problem:            A. Meximization
    Problem link:       https://codeforces.com/contest/1497/problem/0
    Contest:            Codeforces Round #708
    Date:               17/03/2021
    Last Updated:       17/03/2021
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
    vll a(n);
    scan(a);
    _sort(a);
    vector<long int> b;
    ll i; cout<<a[0]<<" ";
    loop(i,1,n,1)
    {
        if(a[i] > a[i-1]){
            cout<<a[i]<<" ";
        }
        else{
            b.pb(a[i]);
        }
    }
    print(b);
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
