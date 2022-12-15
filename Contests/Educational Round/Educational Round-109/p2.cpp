/*
    Problem:            B. Permutation Sort
    Problem link:       https://codeforces.com/contest/1525/problem/B
    Contest:            Educational Codeforces Round 109 (Rated for Div. 2)
    Date:               16/05/2021
    Last Updated:       16/05/2021
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
void solve(){
    ll n, i;
    cin>>n;
    vll a(n);

    bool sorted = true;
    loop(i,1,n+1,1){
        cin>>a[i-1];
        if(i != a[i-1]) sorted = false;
    }

    if(sorted){
        cout<<0<<ee;
        return;
    }

    if(a[0] == 1 || a[n-1] == n){
        cout<<1<<ee;
        return;
    }

    if(a[0] == n && a[n-1] == 1){
        cout<<3<<ee;
        return;
    }
    
    cout<<2<<ee;
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
