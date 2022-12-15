/*
    Problem link:   https://codeforces.com/contest/1364/problem/A
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
    ll n,x;
    cin>>n>>x;
    ll i;
    ll sum=0, a[n];
    loop(i,0,n)
    {
        cin>>a[i];
        sum += a[i];
    }
    if(sum%x != 0)
    {
        cout<<n<<endl;
        return;
    }
    ll max1=0, max2=0;
    ll sum1 = sum, sum2 = sum;
    bool temp = true;
    loop(i,0,n)
    {
        sum1 -= a[i];
        if(sum1%x != 0)
        {
            max1 = n-i-1;
            temp = false;
            break;
        }
    }
    if(temp)
        max1 = (-1);
    ll j=0;
    temp = true;
    ll tempMax2=0;
    rloop(i,n-1,0)
    {
        j++;
        tempMax2 = n-j;
        if(tempMax2 < max1)
        {
            max2 = (-1);
            break;
        }
        sum2 -= a[i];
        if(sum2%x != 0)
        {
            max2 = n-j;
            temp = false;
            break;
        }
    }
    if(temp)
        max2 = (-1);
    cout<<max(max1,max2)<<endl;
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
