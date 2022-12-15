/*
    Problem:            A. Fair Playoff
    Problem link:       https://codeforces.com/contest/1535/problem/A
    Contest:            Educational Codeforces Round 110 (Rated for Div. 2)
    Date:               04/06/2021
    Last Updated:       04/06/2021
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
    // ll a,b,c,d;
    // cin>>a>>b>>c>>d;

    vll s(4);
    scan(s);
    vll k = s;
    _sort(k);
    if(k[3] == s[0] || k[3] == s[1]){
        if(k[2] == s[2] || k[2] == s[3]){
            cout<<"YES"<<ee;
        }
        else{
            cout<<"NO"<<ee;
        }
    }
    else if(k[3] == s[2] || k[3] == s[3]){
        if(k[2] == s[0] || k[2] == s[1]){
            cout<<"YES"<<ee;
        }
        else{
            cout<<"NO"<<ee;
        }
    }
}

/***********************************/
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("D:/Programming/codeforces/Contests/input.txt", "r", stdin);
        freopen("D:/Programming/codeforces/Contests/output.txt", "w", stdout);
    #endif
    
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
