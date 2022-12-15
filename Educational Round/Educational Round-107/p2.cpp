/*
    Problem:            xyz
    Problem link:       xyz
    Contest:            Educational Codeforces Round 107 (Rated for Div. 2)
    Date:               12/04/2021
    Last Updated:       12/04/2021
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
            res = (res*x) ;
        }
        x = (x*x) ;
        y = y>>1;
    }
    return res;
}


/***********************************/
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    ull x = power(10,a-1), y = power(10,b-1), temp = power(10,c-1);
    ull i = x, j = y;
    ull maxI = power(10,a)-1, 
       maxJ = power(10,b)-1, 
       maxTemp = power(10,c)-1;
    bool t1 = false, t2 = false;
    // cout<<i<<" "<<maxI<<" "<<j<<" "<<maxJ<<" "<<temp<<" "<<maxTemp<<ee;

    while(temp <= maxTemp)
    {
        t1 = false; t2 = false;
        i = x; j = y;
        while(i <= maxI)
        {
            if(i % maxTemp == 0) {t1 = true; break;}
            else i++;
        }
        if(!t1)
        {
            maxTemp--; continue;
        }
        while(j <= maxJ)
        {
            if(j % maxTemp == 0) {t2 = true; break;}
            else j++;
        }
        if(!t2) continue;
        if(__gcd(i,j) >= temp && __gcd(i,j) <= maxTemp) {cout<<i<<" "<<j<<ee; return;}
        if(t1 && t2) break;
    }
    cout<<"no"<<ee;

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
