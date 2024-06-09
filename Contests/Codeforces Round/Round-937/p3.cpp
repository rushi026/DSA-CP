/*
    Problem:            C - Clock Conversion
    Problem link:       https://codeforces.com/contest/1950/problem/C
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

/***********************************/
void solve() {
    string s;
    cin>>s;
    bool pm = false;
    int hh = stoi(s.substr(0, 2));
    if(hh > 11) {
        pm = true;
        if(hh > 12) hh -= 12;
        else if(hh == 0) hh = 12;
    }
    if(!hh) hh = 12;
    string hs = "";
    if(hh < 10) hs = "0";
    hs += to_string(hh);
    cout<<hs<<":"<<s.substr(3, 4)<<" "<<(pm ? "PM" : "AM")<<ee;
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