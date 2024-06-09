/*
    Problem:            D. Inaccurate Subsequence Search
    Problem link:       https://codeforces.com/contest/1955/problem/D
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
    ll n, k, m, ans = 0;
    cin>>n>>m>>k;
    vector<int> a(n);
    scan(a);
    unordered_map<int, int> b;
    for(int i = 0; i < m; i++) {
        int c;
        cin>>c;
        b[c]++;
    }
    ll c = 0;
    unordered_map<int, int> temp;
    for(int i = 0; i < m; i++) {
        temp[a[i]]++;
        if(b[a[i]]) {
            if(temp[a[i]] <= b[a[i]]) c++;
        }
    }
    if(c >= k) ans++;
    for(int i = 1; i <= n-m; i++) {
        if(b[a[i - 1]]) {
            if(temp[a[i - 1]] <= b[a[i - 1]]) c--;
        }
        temp[a[i - 1]]--;
        if(!temp[a[i - 1]]) temp.erase(a[i - 1]);

        temp[a[i + m - 1]]++;
        if(b[a[i + m - 1]]) {
            if(temp[a[i + m - 1]] <= b[a[i + m - 1]]) c++;
        }
        if(c >= k) ans++;
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