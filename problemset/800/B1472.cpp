/*
    Problem:            B. Fair Division
    Problem link:       https://codeforces.com/problemset/problem/1472/B
    Date:               20/06/2024
    Last Updated:       20/06/2024
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

void no() {
    cout<<"NO"<<ee;
}

void yes() {
    cout<<"YES"<<ee;
}

/***********************************/
void solve() {
    int n;
    cin>>n;
    int c = 0, d = 0;
    while(n--) {
        int a;
        cin>>a;
        if(a&1) c++;
        else d++;
    }
    if(c&1) return no();
    if((!(c&1)) && (!(d&1))) return yes();
    if(!c) return no();
    return yes();
}

/***********************************/
int main() {
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt", "r", stdin);
        freopen("../../output.txt", "w", stdout);
    #endif

    speedy;
    ll t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}