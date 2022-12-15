/*
    Problem:            A. Shortest Path with Obstacle
    Problem link:       https://codeforces.com/contest/1547/problem/A
    Contest:            Codeforces Round #731 (Div. 3)
    Date:               14/07/2021
    Last Updated:       14/07/2021
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
#define sll                set<ll>
#define pll               pair<ll, ll>
#define mll                map<ll, ll>

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
    ll x1,y1,x2,y2, x,y;
    cin>>x1>>y1>>x2>>y2>>x>>y;
    if(x1 == x2){
        if(x == x1 && (y > min(y1,y2) && y < max(y1,y2))) cout<<abs(y1-y2)+2<<ee;
        else cout<<abs(y1-y2)<<ee;
    }
    else if(y1 == y2){
        if(y == y1 && (x > min(x1,x2) && x < max(x1,x2))) cout<<abs(x1-x2)+2<<ee;
        else cout<<abs(x1-x2)<<ee;
    }
    else cout<<abs(x1-x2) + abs(y1-y2)<<ee;
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
