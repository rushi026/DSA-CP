/*
    # Virtual Contest 
    Problem:            A. Lucky Numbers
    Problem link:       https://codeforces.com/contest/1808/problem/A
    Contest:            Codeforces Round 861 (Div. 2)
    Date:               29/03/2023
    Last Updated:       29/03/2023
    Author:             Rushiraj Parekh
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll                  long long int
#define ull                 unsigned long long int
#define loop(i,x,y,z)       for(ll i=x; i<y; i+=z)
#define rloop(i,x,y,z)      for(ll i=x; i>=y; i-=z)
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

/**********************************/

ll power(ll x, ll y, ll p = 1e9+7) 
{
    ll res = 1;
    x = x ;
    while(y>0) 
    { 
        if(y&1) {
            res = (res*x);
        }
        x = (x*x);
        y = y>>1;
    }
    return res;
}


/***********************************/
ll fun(ll n) {
    ll max = INT_MIN, min = INT_MAX;
    while(n) {
        if(n%10 > max) max = n%10;
        if(n%10 < min) min = n%10;
        n /= 10;
    }
    return max-min;
}

void solve()
{
    ll a,b, ans = INT_MIN, c=0;
    cin>>a>>b;
    loop(i,a,b+1,1) {
        ll temp = fun(i);
        if(temp > ans) {
            ans = temp;
            c=i;
        }
    }
    cout<<c<<ee;
}

/***********************************/
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../../../input.txt", "r", stdin);
        freopen("../../../output.txt", "w", stdout);
    #endif

    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}