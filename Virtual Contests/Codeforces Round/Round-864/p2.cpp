/*
    # Virtual Contest
    Problem:            B. Li Hua and Pattern
    Problem link:       https://codeforces.com/contest/1797/problem/B
    Contest:            Codeforces Round 864 (Div. 2)
    Date:               09/04/2023
    Last Updated:       09/04/2023
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

ll power(ll x, ll y) {
    ll res = 1;
    while(y>0) {
        if(y&1) res *= x;
        x *= x;
        y >>= 1;
    }
    return res;
}


/***********************************/
void solve() {
    ll n,k,c=0;
    cin>>n>>k;
    vector<vector<short>> v(n, vector<short>(n));
    loop(i,0,n,1) loop(j,0,n,1) cin>>v[i][j];
    loop(i,0,(n+1)/2,1) {
        loop(j,0,n,1) {
            if((n&1) && (i==n/2) && (j==n/2)) break;
            if(v[i][j] != v[n-i-1][n-j-1]) c++;
        }
    }
    if((n!=1) && ((k-c)&1) && !(n&1)) cout<<"NO"<<ee;
    else if(c <= k) cout<<"YES"<<ee;
    else cout<<"NO"<<ee;
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