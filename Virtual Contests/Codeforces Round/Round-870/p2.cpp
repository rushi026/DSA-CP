/*
    # Virtual Contest
    Problem:            B. Lunatic Never Content
    Problem link:       https://codeforces.com/contest/1826/problem/B
    Contest:            Codeforces Round 870 (Div. 2)
    Date:               10/05/2023
    Last Updated:       10/05/2023
    Author:             Rushiraj Parekh
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll                  long long int
#define ull                 unsigned long long int
#define loop(i,x,y,z)       for(ll i=x; i<y; i+=z)
#define rloop(i,x,y,z)      for(ll i=x; i>=y; i-=z)
#define ee                  '\n'
#define vll                 vector<ll>
#define scan(v)             for(auto &i : v) cin>>i;
#define print(v)            for(auto i : v) cout<<i<<" ";
#define pb                  push_back
#define all(x)              x.begin(),x.end()
#define _sort(x)            sort(all(x))
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ins(vec,pos,val)    vec.emplace(vec.begin()+pos, val)
#define del(vec,pos)        vec.erase(vec.begin()+pos)

/**********************************/

ll power(ll x, ll y) {
    ll res = 1;
    while(y>0) {
        if(y&1) res *= x;
        x *= x;
        y >>= 1;
    }
    return res;
}


/***********************************/

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);   
}

void solve() {
    ll n, c;
    cin>>n;
    vll v(n);
    scan(v);
    if(n == 1) {
        cout<<0<<ee;
        return;
    } else if(n == 2) {
        cout<<abs(v[1]-v[0])<<ee;
        return;
    }
    vll a((n+1)/2);
    loop(i,0,(n+1)/2,1) a[i] = abs(v[i] - v[n-i-1]);
    c = gcd(a[0], a[1]);
    loop(i,2,(n+1)/2,1) c = gcd(c, a[i]);
    cout<<c<<ee;
}

/***********************************/
int main() {

    #ifndef ONLINE_JUDGE
        freopen("../../../input.txt", "r", stdin);
        freopen("../../../output.txt", "w", stdout);
    #endif

    speedy;
    ll t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}