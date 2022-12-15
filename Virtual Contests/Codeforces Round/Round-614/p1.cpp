/*
    Problem link: https://codeforces.com/contest/1293/problem/A
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

bool fun(ll num, ll arr[], ll siz)
{
    ll i;
    loop(i,0,siz)
    {
        if(arr[i] == num)
            return false;
    }
    return true;
}


void solve()
{
    ll n,s,k,i;
    cin>>n>>s>>k;
    ll a[k];
    bool flag = true;
    loop(i,0,k)
    {
        cin>>a[i];
        if(a[i] == s)
            flag = false;
    }
    if(flag)
    {
        cout<<0<<endl;
        return;
    }
    ll ans1=0,ans2=0;
    rloop(i,s-1,1)
    {
        if(fun(i, a, k))
        {
            ans1 = i;
            break;
        }
    }
    loop(i,s+1,n+1)
    {
        if(fun(i, a, k))
        {
            ans2 = i;
            break;
        }
    }
    if(ans1==0)
    {
        if((ans2-s)<0)
        {
            cout<<1000<<endl;
            return;
        }
        cout<<ans2-s<<endl;
        return;
    }
    if(ans2==0)
    {
        cout<<s-ans1<<endl;
        return;
    }
    ans1 = (s-ans1);
    ans2 = (ans2-s);
    cout<<min(ans1,ans2)<<endl;
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
