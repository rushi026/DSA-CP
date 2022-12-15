/*
    Problem link: https://codeforces.com/contest/1363/problem/A
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
    int n,x;
    cin>>n>>x;
    int a[n];
    int i,even=0,odd=0;
    loop(i,0,n)
    {
        cin>>a[i];
        if(a[i]&1)
            odd++;
        else
            even++;
    }
    if(x>=odd)
    {
        if(odd&1)
            cout<<"Yes"<<endl;
        else if(((x-odd+1) <= even) && (odd>0))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    else
    {
        if(x&1)
            cout<<"Yes"<<endl;
        else if(even>=1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
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

