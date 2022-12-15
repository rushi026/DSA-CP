/*
    Problem:            A. Potion-making
    Problem link:       https://codeforces.com/contest/1525/problem/A
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
void solve()
{
    ll n;
    cin>>n;

    if(n%100 == 0) {
        cout<<1<<ee;
        return;
    }

    if(n%50 == 0){
        cout<<2<<ee;
        return;
    }

    if(n%25 == 0){
        cout<<4<<ee;
        return;
    }

    if(n%20 == 0){
        cout<<5<<ee;
        return;
    }

    if(n%10 == 0){
        cout<<10<<ee;
        return;
    }

    if(n%5 == 0){
        cout<<20<<ee;
        return;
    }

    if(n%4 == 0){
        cout<<25<<ee;
        return;
    }

    if(n%2 == 0){
        cout<<50<<ee;
        return;
    }

    else{
        cout<<100<<ee;
    }
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
