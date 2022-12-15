/*
    Problem:            A. Donut Shops
    Problem link:       https://codeforces.com/contest/1373/problem/A
    Contest:            Educational Codeforces Round 90
    Date:               25/06/2020
    Last Updated:       25/06/2020
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
    ull a,b,c;
    cin>>a>>b>>c;
    ll ans1=(-1), ans2=(-1);

    if(a<c)
    {
        ans1 = 1;
        if(a*b <= c)
            ans2 = (-1);
        else
            ans2 = b;
        cout<<ans1<<" "<<ans2<<endl;
        return;
    }
    if(c<a)
    {
        ans2 = 1;
        cout<<ans1<<" "<<ans2<<endl;
        return;
    }
    if(a==c)
    {
        ans2 = 2;
        ans1 = (-1);
        cout<<ans1<<" "<<ans2<<endl;
        return;
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

