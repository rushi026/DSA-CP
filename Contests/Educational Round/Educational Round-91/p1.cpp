/*
    Problem:            A. Three Indices
    Problem link:       https://codeforces.com/contest/1380/problem/A
    Contest:            Educational Codeforces Round 91 (Rated for Div. 2)
    Date:               13/07/2020
    Last Updated:       13/07/2020
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
    ll a[n+1];
    ll i,p=1,q;
    a[0] = 0;
    bool temp = true;

    loop(i,1,n+1,1)
        cin>>a[i];
    loop(i,2,n+1,1)
    {
        if(a[i] > a[p])
            q = i;
        else
            p = i;

    }
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

