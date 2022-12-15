/*
    Problem link: https://codeforces.com/contest/1353/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        if(n==2)
        {
            cout<<m<<endl;
            continue;
        }
        cout<<m*2<<endl;
    }
    return 0;
}
