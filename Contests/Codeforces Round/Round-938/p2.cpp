/*
    Problem:            B. Progressive Square
    Problem link:       https://codeforces.com/contest/1955/problem/B
    Contest:            Codeforces Round 938 (Div. 3)
    Date:               08/04/2024
    Last Updated:       08/04/2024
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
    int n, c, d, mini = INT_MAX;
    cin>>n>>c>>d;
    vector<int> v(n*n);
    for(int &i: v) {
        cin>>i;
        mini = min(mini, i);
    }
    _sort(v);
    vector<vector<int>> mat(n, vector<int> (n));
    mat[0][0] = mini;
    for(int i = 1; i < n; i++) mat[0][i] = mat[0][i-1] + d;
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < n; j++) mat[i][j] = mat[i-1][j] + c;
    }
    vector<int> v2;
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) v2.pb(mat[i][j]);
    _sort(v2);
    for(int i = 0; i < n*n; i++) if(v[i] != v2[i]) { cout<<"NO"<<ee; return; }
    cout<<"YES"<<ee;
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