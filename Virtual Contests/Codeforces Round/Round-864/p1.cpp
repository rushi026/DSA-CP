/*
    # Virtual Contest
    Problem:            A. Li Hua and Maze
    Problem link:       https://codeforces.com/contest/1797/problem/A
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
    ll n,m,a,b,c,d;
    cin>>n>>m>>a>>b>>c>>d;
    bool flag1 = false, flag2 = false;
    if(((a==1 && b==1) || (a==1 && b==m) || (a==n && b==1) || (a==n && b==m)) || ((c==1 && d==1) || (c==1 && d==m) || (c==n && d==1) || (c==n && d==m))) cout<<2<<ee;
    else if(a==1 || a==n || c==1 || c==n || b==1 || b==m || d==1 || d==m) cout<<3<<ee;
    else cout<<4<<ee;
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