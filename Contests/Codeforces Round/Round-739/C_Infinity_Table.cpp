/*
    Problem:            C. Infinity Table
    Problem link:       https://codeforces.com/contest/1560/problem/C
    Contest:            Codeforces Round #739 (Div. 3)
    Date:               18/08/2021
    Last Updated:       18/08/2021
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
    ll n;
    cin>>n;
    ll temp = floor(sqrt(n));

    if(temp*temp == n){
        cout<<temp<<" "<<1<<ee;
        return;
    }

    ll min = temp*temp + 1;
    ll max = (temp+1)*(temp+1);
    ll mid = (min+max) / 2;
    if(n == min){
        cout<<1<<" "<<temp+1<<ee;
        return;
    }
    if(n == max){
        cout<<temp+1<<" "<<1<<ee;
        return;
    }
    if(n == mid) cout<<temp+1<<" "<<temp+1<<ee;
    else if(n < mid) cout<<n-min+1<<" "<<temp+1<<ee;
    else cout<<temp+1<<" "<<max-n+1<<ee;
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
