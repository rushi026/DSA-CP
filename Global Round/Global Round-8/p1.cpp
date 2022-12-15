/*
    Problem:            A. C+=
    Problem link:       https://codeforces.com/contest/1368/problem/A
    Contest:            Codeforces Global Round 8
    Date:               18/6/2020
    Last Updated:       18/6/2020
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
    ull a,b,n;
    cin>>a>>b>>n;
    ull ans=0;
    while(1)
    {
        if(b>n)
        {
            cout<<ans<<endl;
            return;
        }
        if(a>n)
        {
            cout<<ans<<endl;
            return;
        }
        if(a>b)
            b+=a;
        else
            a+=b;
        ans++;
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
