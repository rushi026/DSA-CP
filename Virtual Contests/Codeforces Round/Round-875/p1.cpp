/*
    # Virtual Contest
    Problem:            A. Twin Permutations
    Problem link:       https://codeforces.com/contest/1831/problem/A
    Contest:            Codeforces Round 875 (Div. 2)
    Date:               30/05/2023
    Last Updated:       30/05/2023
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
void solve() {
    ll n;
    cin>>n;
    vll a(n);
    scan(a);
    loop(i,1,n+1,1) cout<<i<<" ";
    cout<<ee;
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