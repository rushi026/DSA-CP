/*
    Problem:            E. Living Sequence
    Problem link:       https://codeforces.com/contest/1811/problem/E
    Contest:            Codeforces Round 863 (Div. 3)
    Date:               05/04/2023
    Last Updated:       06/04/2023
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

ull countWith4s(ull n) {
    if (n < 4) return 0;

    ll d = log10(n);
    
    vll a(d+1);
    a[0] = 0;
    if(a.size() > 1) a[1] = 1;

    for (ll i=2; i<=d; i++) a[i] = a[i-1]*9 + ceil(pow(10,i-1));

    ll p = ceil(pow(10, d));
    ll msd = n/p;

    if (msd == 4) return (msd)*a[d] + (n%p) + 1;
    if (msd > 4) return (msd-1)*a[d] + p + countWith4s(n%p);
    return (msd)*a[d] + countWith4s(n%p);
}

ull compute(ull l, ull r, ull ans = 0) {
    ull c = countWith4s(r) - countWith4s(l);
    ans += c;
    if(!c) return ans;
    return compute(r, r+c, ans);
}

void solve()
{
    ull n;
    cin>>n;
    cout<<n+compute(1, n, 0)<<ee;
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