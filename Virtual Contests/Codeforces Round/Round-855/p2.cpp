/*
    # Virtual Contest 
    Problem:            B. Count the Number of Pairs
    Problem link:       https://codeforces.com/contest/1800/problem/B
    Contest:            Codeforces Round 855 (Div. 3)
    Date:               05/03/2023
    Last Updated:       05/03/2023
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
void solve()
{
    ll n, k, c=0, i;
    cin>>n>>k;
    string s;
    cin>>s;
    vll a(26, 0), b(26, 0);
    loop(i,0,n,1) {
        if(s[i] >= 97 && s[i] <= 122) a[s[i]-97]++;
        else b[s[i]-65]++;
    }
    loop(i,0,26,1) {
        c += min(a[i], b[i]);
    }
    i = -1;
    while(k) {
        i++;
        if(i == 26) break;
        if(abs(a[i] - b[i])/2 <= k) {
            k -= abs(a[i] - b[i]) / 2;
            c += abs(a[i] - b[i]) / 2;
        }
        else {
            c += k;
            k = 0;
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