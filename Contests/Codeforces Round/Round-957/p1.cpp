/*
    Problem:            A. Only Pluses
    Problem link:       https://codeforces.com/contest/1992/problem/A
    Contest:            Codeforces Round 957 (Div. 3)
    Date:               11/07/2024
    Last Updated:       11/07/2024
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
    int a,b,c;
    cin>>a>>b>>c;
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(a);
    pq.push(b);
    pq.push(c);
    int k = 5;
    while(k--) {
        int x = pq.top();
        pq.pop();
        x++;
        pq.push(x);
    }
    a = pq.top();
    pq.pop();
    b = pq.top();
    pq.pop();
    c = pq.top();
    cout<<a*b*c<<ee;
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