/*
    # Virtual Contest 
    Problem:            A. Cut the Triangle
    Problem link:       https://codeforces.com/contest/1767/problem/A
    Contest:            Educational Codeforces Round 140 (Rated for Div. 2)
    Date:               28/03/2023
    Last Updated:       28/03/2023
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

ll power(ll x, ll y, ll p = 1e9+7) 
{ 
    ll res = 1;
    x = x ;
    while(y>0) 
    { 
        if(y&1) {
            res = (res*x);
        }
        x = (x*x);
        y = y>>1;
    }
    return res;
}


/***********************************/
void solve()
{
    ll a,b,p,q,y,z;
    cin>>a>>b>>p>>q>>y>>z;
    if(a==p || p==y || y==a) {
        if(a==p) {
            if(b==z || q==z) { cout<<"NO"<<ee; return; }
        } else if(p==y) {
            if(q==b || z==b) { cout<<"NO"<<ee; return; }
        } else if(y==a) {
            if(z==q || b==q) { cout<<"NO"<<ee; return; }
        }
    }
    if(b==q || q==z || z==b) {
        if(b==q) {
            if(a==y || p==y) { cout<<"NO"<<ee; return; }
        } else if(q==z) {
            if(p==a || y==a) { cout<<"NO"<<ee; return; }
        } else if(z==b) {
            if(y==p || a==p) { cout<<"NO"<<ee; return; }
        }
    }
    cout<<"YES"<<ee;
}

/***********************************/
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../../../input.txt", "r", stdin);
        freopen("../../../output.txt", "w", stdout);
    #endif
    
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
