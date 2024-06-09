/*
    Problem:            B. Conveyor Belts
    Problem link:       https://codeforces.com/contests/1811/problem/B
    Contest:            Codeforces Round 863 (Div. 3)
    Date:               04/04/2023
    Last Updated:       04/04/2023
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

ll pow(ll x, ll n) {
    ll res = 1;
    while(n){
        if(n&1) res *= x;
        x *= x;
        n >>= 1;
    }
    return res;
}


/***********************************/
void solve() {
    ll n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    if((a==c || a==n-c+1) && (b==d || b==n-d+1)) {
        cout<<0<<ee;
        return;
    }
    if(a > n/2) a = n-a+1;
    if(b > n/2) b = n-b+1;
    if(c > n/2) c = n-c+1;
    if(d > n/2) d = n-d+1;
    a = min(a,b);
    b = min(a,b);
    c = min(c,d);
    d = min(c,d);
    cout<<abs(d-b)<<ee;
}

/***********************************/
int main() {
    #ifndef ONLINE_JUDGE
        freopen("../../../input.txt", "r", stdin);
        freopen("../../../output.txt", "w", stdout);
    #endif

    speedy;
    ll t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}