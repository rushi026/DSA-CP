/*
    Problem:            B. Interesting Sum
    Problem link:       https://codeforces.com/contest/1720/problem/B
    Contest:            Codeforces Round #815 (Div. 2)
    Date:               18/08/2022
    Last Updated:       18/08/2022
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
    ll n, i, a=0,b=0,c=0,d=0;
    cin>>n;
    vll v(n);
    loop(i,0,n,1) {
        cin>>v[i];
        if(v[i] < v[a]) a = i;
        if(v[i] > v[b]) b = i;
    }
    if(!a) c++;
    if(!b) d++;
    loop(i,0,n,1) {
        if(v[i] < v[c] && i != a) c = i;
        if(v[i] > v[d] && i != b) d = i;
    }
    cout<<v[b] + v[d] - v[a] - v[c]<<ee;
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
