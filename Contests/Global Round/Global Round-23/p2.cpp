/*
    Problem:            B. Rebellion
    Problem link:       https://codeforces.com/contest/1746/problem/B
    Contest:            Codeforces Global Round 23
    Date:               15/10/2022
    Last Updated:       15/10/2022
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
    ll n,k,c=0,i,j;
    cin>>n;
    vll a(n);
    scan(a);
    i = 0; j = n-1;
    while(i <= j) {
        while(i < n) {
            if(a[i]) break;
            i++;
        }
        while(j >= 0) {
            if(!a[j]) break;
            j--;
        }
        if(i < j) c++;
        i++; j--;
    }
    cout<<c<<ee;
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
