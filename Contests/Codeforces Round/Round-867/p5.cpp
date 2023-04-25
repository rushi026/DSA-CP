/*
    Problem:            E. Making Anti-Palindromes
    Problem link:       https://codeforces.com/contest/1822/problem/E
    Contest:            Codeforces Round 867 (Div. 3)
    Date:               24/04/2023
    Last Updated:       25/04/2023
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
    ll n,i, temp=0;
    cin>>n;
    string s;
    cin>>s;
    if(n&1) {
        cout<<-1<<ee;
        return;
    }
    map<char, int> c, perm;
    loop(i,0,n,1) {
        c[s[i]]++;
        if(i < n/2 && s[i] == s[n-1-i]) {
            temp++;
            perm[s[i]]++;
        }
    }
    for(auto t: c) {
        if(t.second > n/2) {
            cout<<-1<<ee;
            return;
        }
    }
    ll _max = INT_MIN;
    for(auto t: perm) _max = t.second > _max ? t.second : _max;
    if(_max > temp-_max) cout<<_max<<ee;
    else cout<<ceil(temp/2.0)<<ee;
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