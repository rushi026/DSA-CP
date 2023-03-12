/*
    # Virtual Contest 
    Problem:            B. NIT Destroys the Universe
    Problem link:       https://codeforces.com/contest/1696/problem/B
    Contest:            Codeforces Global Round 21
    Date:               11/03/2023
    Last Updated:       11/03/2023
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
    ll n, c=0;
    cin>>n;
    vll v(n), k(3,0);
    bool flag = true;
    loop(i,0,n,1) {
        cin>>v[i];
        if(v[i]) flag = false;
        if(!k[0] && v[i]) k[0]++;
        if(!k[1] && !v[i] && k[0]) k[1]++;
        if(!k[2] && v[i] && k[1]) k[2]++;
    }
    if(flag) cout<<0<<ee;
    else if(k[0] && k[1] && k[2]) cout<<2<<ee;
    else cout<<1<<ee;
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
