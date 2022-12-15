/*
    Problem:            A. Pretty Permutations
    Problem link:       https://codeforces.com/contest/1541/problem/A
    Contest:            Codeforces Round #728 (Div. 2)
    Date:               25/06/2021
    Last Updated:       25/06/2021
    Author:             Rushiraj Parekh
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll                  long long int
#define ull                 unsigned long long int
#define loop(i,x,y,z)       for(i=x; i<=y; i+=z)
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
#define iset                set<ll>
#define ipair               pair<ll, ll>
#define imap                map<ll, ll>

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
    ll n,i,j;
    cin>>n;
    if(n == 1){
        cout<<1<<ee;
    }
    else if(n&1){
        loop(i,1,n-3,2){
            cout<<i+1<<" "<<i<<" ";
        }
        cout<<n<<" "<<n-2<<" "<<n-1;
    }
    else{
        loop(i,1,n,2){
            cout<<i+1<<" "<<i<<" ";
        } //loop changed particular for this program
    }
    cout<<ee;
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
