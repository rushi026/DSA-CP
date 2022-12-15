/*
    ********** Virtual contest ***********
    Problem:            A. Stone Game
    Problem link:       https://codeforces.com/contest/1538/problem/A
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
    ll n, min0 = INT32_MAX, max0 = INT32_MIN, imin=0, imax=0;
    cin>>n;
    vll a(n+1);
    a[0] = 0;
    loop(i,1,n+1,1){
        cin>>a[i];
        if(a[i] > max0){
            max0 = a[i];
            imax = i;
        }
        if(a[i] < min0){
            min0 = a[i];
            imin = i;
        }
    }
    if(imin <= n/2 && imax <= n/2){
        cout<<max(imin, imax)<<ee;
        return;
    }
    if(imin > n/2 && imax > n/2){
        cout<<n + 1 - (min(imin, imax))<<ee;
        return;
    }
    if(imin > imax) swap(imin, imax);
    ll ans1=0, ans2=0, ans3=0;
    ans1 += imin; ans1 += (n+1-imax);
    ans2 = imax;
    ans3 = n + 1 - imin;
    if(ans1 < ans2){
        if(ans1 < ans3){
            cout<<ans1<<ee;
            return;
        }
        if(ans3 < ans2){
            cout<<ans3<<ee;
            return;
        }
    }
    else{
        if(ans2 < ans3){
            cout<<ans2<<ee;
            return;
        }
        else{
            cout<<ans3<<ee;
            return;
        }
    }
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
