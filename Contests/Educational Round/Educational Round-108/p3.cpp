/*
    Problem:            C. Berland Regional
    Problem link:       https://codeforces.com/contest/1519/problem/C
    Contest:            Educational Codeforces Round 108 (Rated for Div. 2)
    Date:               29/04/2021
    Last Updated:       29/04/2021
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
    // cout<<"begin";
    ll n, i, j;
    cin>>n;
    vll u(n),s(n);
    scan(u); scan(s);
    if(n == 1){
        cout<<s[0]<<ee; return;
    }
    vector< vector<ll> > l(n);
    loop(i,0,n,1){
        l[ u[i] ].pb(s[i]);
    }
    // cout<<"begin2";
    loop(i,0,l.size(),1){
        sort(l[i].begin(), l[i].end(), greater <>());
        // print(l[i]); cout<<ee;
    }
    ll c=0,k;
    loop(k,1,n+1,1){
        c=0;
        loop(i,0,n,1){
            loop(j,0,(l[i].size()/k)*k,1){
                c += l[i][j];
            }
        }
        cout<<c<<" ";
    }
    cout<<ee;
    // cout<<"done";
}

/***********************************/
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("D:/Programming/codeforces/Contests/input.txt", "r", stdin);
        freopen("D:/Programming/codeforces/Contests/output.txt", "w", stdout);
    #endif
    
    // speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
