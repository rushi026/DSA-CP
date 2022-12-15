/*
    ********** Virtual contest ***********
    Problem:            B. Friends and Candies
    Problem link:       https://codeforces.com/contest/1538/problem/B
    Contest:            Codeforces Round #725 (Div. 3)
    Date:               14/06/2021
    Last Updated:       14/06/2021
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
    ll n, sum=0;
    cin>>n;
    vll a(n);
    bool all_equal = true;
    cin>>a[0];
    if(n == 1){
        cout<<0<<ee;
        return;
    }
    sum += a[0];
    loop(i,1,n,1){
        cin>>a[i];
        if(a[i] != a[0]) all_equal = false;
        sum += a[i];
    }
    if(all_equal){
        cout<<0<<ee;
        return;
    }
    ll avg = sum / n;
    if(n * avg != sum){
        cout<<-1<<ee;
        return;
    }
    ll c = 0;
    loop(i,0,n,1){
        if(a[i] > avg) c++;
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
