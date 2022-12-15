/*
    Problem:            B. Mathematical Circus
    Problem link:       https://codeforces.com/contest/1719/problem/B
    Contest:            Codeforces Round #814 (Div. 2)
    Date:               16/08/2022
    Last Updated:       16/08/2022
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
    ll n, k;
    cin>>n>>k;
    if(!k) {
        cout<<"NO"<<ee;
        return;
    }
    ll i;
    
    if(k&1) {cout<<"YES"<<ee; loop(i,1,n,2) cout<<i<<" "<<i+1<<ee;}
    else {
        if(k%4 == 0) {cout<<"NO"<<ee; return;}
        cout<<"YES"<<ee;
        loop(i,3,n,4) cout<<i<<" "<<i+1<<ee;
        loop(i,1,n,4) cout<<i+1<<" "<<i<<ee;
    }
}
// H:\Programming\DSA-CP\Codeforces\input.txt
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
