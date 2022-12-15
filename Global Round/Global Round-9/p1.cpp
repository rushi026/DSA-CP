/*
    Problem:            A. Sign Flipping
    Problem link:       https://codeforces.com/contest/1375/problem/A
    Contest:            Codeforces Global Round 9
    Date:               04/07/2020
    Last Updated:       04/07/2020
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
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


/***********************************/
void solve()
{
    ll n;
    cin>>n;
    ll i;
    ll a[n];
    loop(i,0,n,1)
    {
        cin>>a[i];
        a[i] = abs(a[i]);
    }
    loop(i,0,n,1)
    {
        if(i&1)
            cout<<a[i]-(2*a[i])<<" ";
        else
            cout<<a[i]<<" ";
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

