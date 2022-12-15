/*
    Problem link: https://codeforces.com/contest/1353/problem/C
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
        ll n,ans=0;
        cin>>n;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        ans += (n*n - 1);
        ll s = (n-3)/2;
        for(int i=1;i<=s;i++)
        {
            ll temp = i*8;
            ans += temp*(i+1);
        }
        cout<<ans<<endl;
    }
    return 0;
}
