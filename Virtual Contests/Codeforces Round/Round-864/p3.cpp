/*
    # Virtual Contest
    Problem:            C. Li Hua and Chess
    Problem link:       https://codeforces.com/contest/1797/problem/C
    Contest:            Codeforces Round 864 (Div. 2)
    Date:               10/04/2023
    Last Updated:       10/04/2023
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
    ll n,m, c,c2,c3;
    cin>>n>>m;
    cout<<"? 1 1"<<ee;
    cout.flush();
    cin>>c;
    if(!c) {
        cout<<"! 1 1"<<ee;
        cout.flush();
        return;
    }
    if(c+1 <= n && c+1 <=m) {
        cout<<"? "<<c+1<<" "<<c+1<<ee;
        cout.flush();
        cin>>c2;
        if(!c2) {
            cout<<"! "<<c+1<<" "<<c+1<<ee;
            cout.flush();
            return;
        }
        cout<<"? "<<c-c2+1<<" "<<c+1<<ee;
        cout.flush();
        cin>>c3;
        if(!c3) cout<<"! "<<c-c2+1<<" "<<c+1<<ee;
        else cout<<"! "<<c+1<<" "<<c-c2+1<<ee;
        return;
    }
    if(c+1 <= n) {
        cout<<"? "<<c+1<<" "<<1<<ee;
        cout.flush();
        cin>>c2;
        if(!c2) cout<<"! "<<c+1<<" "<<1<<ee;
        else cout<<"! "<<c+1<<" "<<1+c2<<ee;
        cout.flush();
        return;
    }
    cout<<"? "<<1<<" "<<c+1<<ee;
    cout.flush();
    cin>>c2;
    if(!c2) cout<<"! "<<1<<" "<<c+1<<ee;
    else cout<<"! "<<1+c2<<" "<<c+1<<ee;
    cout.flush();
}

/***********************************/
int main() {

    // #ifndef ONLINE_JUDGE
    //     freopen("../../../input.txt", "r", stdin);
    //     freopen("../../../output.txt", "w", stdout);
    // #endif

    // speedy;
    ll t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}