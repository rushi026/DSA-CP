/*
    Problem:            A. Sum of 2050
    Problem link:       https://codeforces.com/contest/1517/problem/A
    Contest:            Contest 2050 and Codeforces Round #718 (Div. 1 + Div. 2)
    Date:               23/04/2021
    Last Updated:       23/04/2021
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
#define print(v)            for(auto i : v) cout<<i<<"\n";
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
    vector<ull> a(16);
    ll i;
    loop(i,1,16,1){
        a[i] = 205*(power(10,i));
    }
    ull n;
    cin>>n;
    if(n % 2050 != 0){
        cout<<-1<<ee; return;
    }
    if(n/2050 == 10 || n == 2050){
        cout<<1<<ee; return;
    }
    ll c=0;
    while(n>0){
        rloop(i,15,1,1){
            if(n >= a[i]) {n -= a[i]; c++; break;}
        }
    }
    cout<<c<<ee;
}

/***********************************/
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("D:/Programming/codeforces/Contests/input.txt", "r", stdin);
        freopen("D:/Programming/codeforces/Contests/output.txt", "w", stdout);
    #endif
    
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
