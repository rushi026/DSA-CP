/*
    Problem link: https://codeforces.com/contest/1360/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll              long long int
#define ull             unsigned long long int
#define loop(i,x,y)     for(ll i=x; i<y; i++)
#define rloop(i,x,y)    for(ll i=y; i>=x; i--)
#define endl            '\n'
#define speedy          ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


/***********************************/
void solve()
{
    int n,i,j;
    cin>>n;
    int a[n];
    loop(i,0,n)
    {
        cin>>a[i];
    }
    int diff = INT_MAX;
    loop(i,0,n-1)
        loop(j,i+1,n)
            if(abs(a[i] - a[j]) < diff)
                diff = abs(a[i] - a[j]);
    cout<<diff<<endl;
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

