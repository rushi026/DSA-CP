/*
    Problem:            E. Nearly Shortest Repeating Substring
    Problem link:       https://codeforces.com/contest/1950/problem/E
    Contest:            Codeforces Round 937 (Div. 4)
    Date:               28/03/2024
    Last Updated:       02/04/2024
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

bool isDivisible(string &s, string &sub) {
    int n = s.size();
    int k = sub.size();
    int c = 0, i = 0;
    while(i < n) {
        int cc = 0;
        for(int j = 0; j < k; j++) {
            if(sub[j] != s[i]) {
                cc++;
                c++;
            }
            if(cc > 1) return false;
            i++;
        }
        if(c > 1) return false;
    }
    return true;
}

bool possible(string &s, int n, int k) {
    string pre = s.substr(0, k);
    if(isDivisible(s, pre)) return true;
    pre = s.substr(n-k, k);
    return isDivisible(s, pre);
}

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> divisors;
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            divisors.push_back(i);
            divisors.push_back(n / i);
        }
    }
    _sort(divisors);
    for(int k: divisors) {
        if(k == n) {
            cout<<k<<ee;
            return;
        }
        if(possible(s, n, k)) {
            cout<<k<<ee;
            return;
        }
    }
    cout<<-1<<ee;
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