/*
    # Virtual Contest 
    Problem:            B. Not Dividing
    Problem link:       https://codeforces.com/contest/1794/problem/B
    Contest:            Codeforces Round 856 (Div. 2)
    Date:               08/03/2023
    Last Updated:       08/03/2023
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
    ll n, i;
    cin>>n;
    vll v(n);
    scan(v);
    loop(i,0,n-1,1) {
        if(v[i+1] % v[i] == 0) {
            v[i]++;
            if(i > 0 && v[i] % v[i-1] == 0) v[i]++;
        }
        if(i>0 && v[i] % v[i-1] == 0) v[i]++;
    }
    if(v[n-1] % v[n-2] == 0) v[n-1]++;
    print(v);
    cout<<ee;
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
