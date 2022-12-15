/*
    Problem:            C. Fighting Tournament
    Problem link:       https://codeforces.com/contest/1719/problem/C
    Contest:            Codeforces Round #814 (Div. 2)
    Date:               16/08/2022
    Last Updated:       17/08/2022
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

ll fun(ll x, ll n){
    ll res = 1;
    while(n){
        if(n&1) res *= x;
        x *= x;
        n >>= 1;
    }
    return res;
}


/***********************************/
void solve()
{
    ll n, q, i, j, _max = INT_MIN, maxIndex = 0;
    cin>>n>>q;
    vll v(n), c(n, 0), ans(q, 0);
    vector<vector<ll>> p(q, vector<ll>(2));
    scan(v);
    loop(i,0,q,1) cin>>p[i][0]>>p[i][1];
    j = 0; _max = v[0];
    mll m;
    m[v[0]] = 0;
    for(i = 1; i < n; i++) {
        m[v[i]] = i;
        if(v[i] > v[maxIndex]) {
            _max = v[i];
            maxIndex = i;
        }
        if(v[i] > v[j]) j = i;
        c[j]++;
    }
    for(auto temp: p) {
        if(temp[0] > temp[1]+1) cout<<0<<ee;
        else if(maxIndex + 1 == temp[0]) {
            if(maxIndex) cout<<temp[1] - maxIndex + 1<<ee;
            else cout<<n-1<<ee;
        }
        else cout<<min((ll)c[temp[0]-1], (ll)temp[1])<<ee;
    }
}
/***********************************/
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("H:/Programming/DSA-CP/Codeforces/input.txt", "r", stdin);
        freopen("H:/Programming/DSA-CP/Codeforces/output.txt", "w", stdout);
    #endif
    
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
