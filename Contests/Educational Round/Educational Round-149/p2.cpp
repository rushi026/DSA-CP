/*
    Problem:            B. Comparison String
    Problem link:       https://codeforces.com/contest/1837/problem/B
    Contest:            Educational Codeforces Round 149 (Rated for Div. 2)
    Date:               25/05/2023
    Last Updated:       25/05/2023
    Author:             Rushiraj Parekh
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll                  long long int
#define ull                 unsigned long long int
#define loop(i,x,y,z)       for(i=x; i<y; i+=z)
#define rloop(i,x,y,z)      for(i=x; i>=y; i-=z)
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
#define sll                	set<ll>
#define pll               	pair<ll, ll>
#define mll                	map<ll, ll>

/**********************************/

ll pow(ll x, ll n) {
    ll res = 1;
    while(n){
        if(n&1) res *= x;
        x *= x;
        n >>= 1;
    }
    return res;
}


/***********************************/
void solve() {
    ll n, i, c=0;
    cin>>n;
    string s;
    cin>>s;
    vll v(n+1);
    v[0] = 0;
    loop(i,0,n,1) {
        if(s[i] == '<') v[i+1] = v[i]+1;
        else v[i+1] = v[i]-1;
    }
    print(v); cout<<ee;
    sll _s;
    for(auto k: v) _s.insert(k);
    cout<<_s.size()<<ee;
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