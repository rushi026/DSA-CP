/*
    Problem:            A. Favorite Sequence
    Problem link:       https://codeforces.com/contest/1462/problem/A
    Contest:            Codeforces Round #690 (Div. 3)
    Date:               15/12/2020
    Last Updated:       15/12/2020
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
    if(n == 1) {
        ll temp;
        cin>>temp;
        cout<<temp<<endl;
        return;
    }
    long long int a[n];
    ll i;
    loop(i,0,n,1) {
        cin>>a[i];
    }
    
    loop(i,0,n/2,1) {
        cout<<a[i]<<" ";
        cout<<a[n-i-1]<<" ";
    }
    if(n&1) {
        cout<<a[n/2]<<" ";
    }
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
