/*
    Problem:            B. Upscaling
    Problem link:       https://codeforces.com/contest/1950/problem/B
    Contest:            Codeforces Round 937 (Div. 4)
    Date:               28/03/2024
    Last Updated:       28/03/2024
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

bool even(int n) {
    return !(n&1);
}

/***********************************/
void solve() {
    int n;
    cin>>n;
    vector<vector<char>> v(n*2, vector<char> (n*2, '*'));
    for(int ii = 0; ii < n; ii++) {
        for(int jj = 0; jj < n; jj++) {
            int i = ii*2, j = jj*2;
            if(even(ii) && even(jj)) {
                v[i][j] = '#';
                v[i+1][j] = '#';
                v[i][j+1] = '#';
                v[i+1][j+1] = '#';
            } else if(even(ii) && !even(jj)) {
                v[i][j] = '.';
                v[i+1][j] = '.';
                v[i][j+1] = '.';
                v[i+1][j+1] = '.';
            } else if(!even(ii) && even(jj)) {
                v[i][j] = '.';
                v[i+1][j] = '.';
                v[i][j+1] = '.';
                v[i+1][j+1] = '.';
            } else {
                v[i][j] = '#';
                v[i+1][j] = '#';
                v[i][j+1] = '#';
                v[i+1][j+1] = '#';
            }
        }
    }
    for(auto k: v) {
        for(char kk: k) cout<<kk;
        cout<<ee;
    }
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