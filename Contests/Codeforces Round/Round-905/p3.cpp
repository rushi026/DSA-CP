/*
    Problem:            C. Raspberries
    Problem link:       https://codeforces.com/contest/1883/problem/C
    Contest:            Codeforces Round 905 (Div. 3)
    Date:               22/10/2023
    Last Updated:       22/10/2023
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
    int n, k, c = 0, i;
    cin>>n>>k;
    vector<int> v(n);
    int min5 = 10, min3 = 10, min4 = 10;
    loop(i, 0, n, 1) {
        cin>>v[i];
        min5 = min(min5, (5-(v[i]%5))%5);
        min3 = min(min3, (3-(v[i]%3))%3);
        min4 = min(min4, (4-(v[i]%4))%4);
        if(v[i] % 2 == 0) c++;
    }
    if(k == 2) {
        if(c) cout<<0<<ee;
        else cout<<1<<ee;
    }
    else if(k == 3) cout<<min3<<ee;
    else if(k == 4) {
        if(c > 1) cout<<0<<ee;
        else if(c > 0 && n-c > 0) cout<<min(1, min4)<<ee;
        else cout<<min(2, min4)<<ee;
    }
    else cout<<min5<<ee;
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