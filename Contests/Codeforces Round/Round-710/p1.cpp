/*
    Problem:            A. Strange Table
    Problem link:       https://codeforces.com/contest/1506/problem/A
    Contest:            Codeforces Round #710 (Div. 3)
    Date:               25/03/2021
    Last Updated:       26/03/2021
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
    ll n,m,a;
    cin>>n>>m>>a;
    if(a == n*m || a == 1)
    {cout<<a<<endl; return;}
    if(n == 1 || m == 1)
    {cout<<a<<endl; return;}
    ll x,y;
    x = a%n;
    if(x==0) x=n;
    if(a%n == 0) y = a/n;
    else y = (a/n) + 1;
    cout<<((x-1)*m)+y<<endl;
}

/***********************************/
int main()
{
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
}