/*
    Problem:            C. Pair Programming
    Problem link:       https://codeforces.com/contest/1547/problem/B
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
    ll k,n,m, temp;
    cin>>k>>n>>m;
    temp = n+m;
    vll a(n), b(m), c(temp);
    scan(a); scan(b);
    ll i = 0, j = 0, t=0;
    while(i<n || j<m){
        if(i<n && a[i] == 0){
            k++;
            c[t++] = a[i];
            i++;
        }
        else if(j<m && b[j] == 0){
            k++;
            c[t++] = b[j];
            j++;
        }
        else if(i<n && a[i] <= k){
            c[t++] = a[i];
            i++;
        }
        else if(j<m && b[j] <= k){
            c[t++] = b[j];
            j++;
        }
        else{
            cout<<-1<<ee;
            return;
        }
    }
    print(c);
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
