/*
    Problem:            B. Box Fitting
    Problem link:       https://codeforces.com/contest/1498/problem/B
    Contest:            CodeCraft-21 and Codeforces Round #711 (Div. 2)
    Date:               29/03/2021
    Last Updated:       29/03/2021
    Author:             Rushiraj Parekh
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll                  long long int
#define ull                 unsigned long long int
#define loop(i,x,y,z)       for(ll i=x; i<y; i+=z)
#define rloop(i,x,y,z)      for(ll i=x; i>=y; i-=z)
#define endl                '\n'
#define vll                 vector<ll>
#define scan(v)             for(auto &i : v) cin>>i;
#define print(v)            for(auto i : v) cout<<i<<" ";
#define pb                  push_back
#define all(x)              x.begin(),x.end()
#define _sort(x)            sort(all(x))
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ins(vec,pos,val)    vec.emplace(vec.begin()+pos, val)
#define del(vec,pos)        vec.erase(vec.begin()+pos)                


/***********************************/
void solve()
{
    ll n,w;
    cin>>n>>w;
    vll a(n), b;
    scan(a);
    _sort(a);
    ll level = 1, ans = 1, i = n;
    b.pb(w); bool temp = false;
    while(i--)
    {
        temp = false;
        loop(level, 0, b.size(), 1)
        {
            if(b[level] >= a[i])
            {
                b[level] -= a[i];
                temp = true;
                break;
            }
        }
        if(!temp) {b.pb(w); i++;}
    }
    cout<<b.size()<<endl;
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
