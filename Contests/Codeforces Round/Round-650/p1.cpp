/*
    Problem link:   https://codeforces.com/contest/1367/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll              long long int
#define ull             unsigned long long int
#define loop(i,x,y)     for(ll i=x; i<y; i++)
#define rloop(i,x,y)    for(ll i=x; i>=y; i--)
#define endl            '\n'
#define speedy          ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


/***********************************/
void solve()
{
    string a = "",b;
    cin>>b;
    a += b[0];
    ll i;
    ll len = b.length();
    for(i=1; i<len-1; i+=2)
        a+=b[i];
    a += b[len-1];
    cout<<a<<endl;
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

