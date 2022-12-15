/*
    Problem:            A. String Generation
    Problem link:       https://codeforces.com/contest/1461/problem/0
    Contest:            Codeforces Round #689
    Date:               11/12/2020
    Last Updated:       12/12/2020
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
 
 
/***********************************/
void solve()
{
    ll n,k,i;
    cin>>n>>k;
    char a;
    if(k == 1) {
        a = 'a';
        loop(i,0,n,1) {
            cout<<a;
            a++;
            if(a == 'd')
                a = 'a';
        }
        cout<<endl;
        return;
    }
    a = 'a';
    loop(i,0,k,1)
        cout<<a;
    a = 'c';
    loop(i,0,n-k,1) {
        cout<<a;
        a--;
        if(a < 'a')
            a = 'c'; 
    }
    cout<<endl;
}
 
/***********************************/
int main()
{
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}