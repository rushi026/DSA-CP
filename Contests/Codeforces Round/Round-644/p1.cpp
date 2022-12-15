/*
    Problem link: https://codeforces.com/contest/1360/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll              long long int
#define ull             unsigned long long int
#define loop(i,x,y)     for(ll i=x; i<y; i++)
#define rloop(i,x,y)    for(ll i=y; i>=x; i--)
#define endl            '\n'
#define speedy          ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


/***********************************/
void solve()
{
    int a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<a*a*4<<endl;
        return;
    }
    if(a>b)
    {
        a = a+b;
        b = a-b;
        a = a-b;
    }
    if(a*2 <= b)
        cout<<b*b<<endl;
    else
        cout<<a*a*4<<endl;
}

/***********************************/
int main()
{
    speedy;
    ll t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
