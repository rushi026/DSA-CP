/*
    Problem:            B. Beautiful Array
    Problem link:       https://codeforces.com/contest/1715/problem/B
    Contest:            Codeforces Round #816 (Div. 2)
    Date:               20/08/2022
    Last Updated:       20/08/2022
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

ll fun(ll x, ll n){
    ll res = 1;
    while(n){
        if(n&1) res *= x;
        x *= x;
        n >>= 1;
    }
    return res;
}


/***********************************/
void solve()
{
    ll n,b,c,d,i;
    cin>>n>>b>>c>>d;
    vll a(n);
    i=0;
    while(true) {
        if(i == n) break;
        a[i] = min(d,(b*c)+b-1);
        c -= a[i] / b;
        d -= a[i];
        i++;
    }
    if(c) {
        cout<<-1<<ee;
        return;
    }
    if(d && i==n) {
        cout<<-1<<ee;
        return;
    }
    if((n-i)*(b-1) < d) {
        cout<<-1<<ee;
        return;
    }
    while(i < n) {
        a[i] = min(d, (n-i)*(b-1));
        d -= a[i];
        i++;
    }
    print(a); cout<<ee;
}

/***********************************/
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("H:/Programming/DSA-CP/Codeforces/input.txt", "r", stdin);
        freopen("H:/Programming/DSA-CP/Codeforces/output.txt", "w", stdout);
    #endif
    
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
