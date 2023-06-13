/*
    # Virtual Contest
    Problem:            B. Keep it Beautiful
    Problem link:       https://codeforces.com/contest/1841/problem/B
    Contest:            Educational Codeforces Round 150 (Rated for Div. 2)
    Date:               13/06/2023
    Last Updated:       13/06/2023
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
    ll n, a;
    cin>>n>>a;
    cout<<1;
    bool flag = false;
    ll last=a;
    loop(i,1,n,1) {
        ll t;
        cin>>t;
        if(flag && (t>=last && t<=a)) {
            cout<<1;
            last = t;
        }
        else if(flag && t==a) {
            cout<<1;
        }
        else if(!flag && t>=last) {
            cout<<1;
            last = t;
        }
        else if(!flag && t<last && t<=a) {
            flag = true;
            cout<<1;
            last = t;
        }
        else cout<<0;
    }
    cout<<ee;
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