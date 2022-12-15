/*
    Problem:            A. Remove Smallest
    Problem link:       https://codeforces.com/contest/1399/problem/A
    Contest:            Codeforces Round #661 (Div. 3)
    Date:               09/08/2020
    Last Updated:       09/08/2020
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
    sort(a,a+n);
    loop(i,0,n-1,1)
    {
        if(abs(a[i] - a[i+1]) > 1)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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
