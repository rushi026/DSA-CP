/*
    Problem:            B. Fair Division
    Problem link:       https://codeforces.com/contest/1472/problem/B
    Contest:            Codeforces Round #693 (Div. 3)
    Date:               07/01/2021
    Last Updated:       07/01/2020
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
    ll n;
    cin>>n;
    ll a[n];
    ll i, sum=0, no1=0;
    loop(i,0,n,1) {
        cin>>a[i]; sum += a[i];
        if(a[i] == 1)
            no1++;
    }
    if(!(sum&1) && !(n&1)) {
        if(!(no1&1))
            cout<<"YES"<<endl;
    }
    else 
        cout<<"NO"<<endl;
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
