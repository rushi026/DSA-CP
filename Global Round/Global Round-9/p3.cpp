/*
    Problem:            C. Element Extermination
    Problem link:       https://codeforces.com/contest/1375/problem/C
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
    ll a[n];
    ll i;
    loop(i,0,n,1)
        cin>>a[i];
    if(a[0] < a[n-1])
        cout<<"YES"<<endl;
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
