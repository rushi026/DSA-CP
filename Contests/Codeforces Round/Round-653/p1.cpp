/*
    Problem:            A. Required Remainder
    Problem link:       https://codeforces.com/contest/1374/problem/A
    Contest:            Codeforces Round #653 (Div. 3)
    Date:               28/06/2020
    Last Updated:       28/06/2020
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
    ull x,y,n,k=0;
    cin>>x>>y>>n;
    ull temp = n/x;
    ull temp2 = temp * x;
    ull ans = temp2 + y;
    if(ans>n)
    {
        ans -= x;
    }
    cout<<ans<<endl;
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

