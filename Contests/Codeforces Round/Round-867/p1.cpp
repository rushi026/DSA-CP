/*
    Problem:            A. TubeTube Feed
    Problem link:       https://codeforces.com/contest/1822/problem/A
    Contest:            Codeforces Round 867 (Div. 3)
    Date:               24/04/2023
    Last Updated:       24/04/2023
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
    ll n,k;
    cin>>n>>k;
    vll a(n), b(n);
    ll i, mostIntTillNow = -1, ans = -1;
    scan(a);
    scan(b);
    loop(i,0,n,1) {
        if((b[i] >= mostIntTillNow) && ((i+a[i]) <= k)) {
            mostIntTillNow = b[i];
            ans = i+1;
        }
    }
    cout<<ans<<ee;
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