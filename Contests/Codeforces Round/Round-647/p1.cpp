/*
    Problem link: https://codeforces.com/contest/1362/problem/A
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
    ull a,b;
    cin>>a>>b;
    ull ans=0;
    if(a == b)
    {
        cout<<0<<endl;
        return;
    }
    if(b>a)
    {
        if(b&1)
        {
            cout<<-1<<endl;
            return;
        }
        while(a<=b)
        {
            if(a*8 <= b)
                a*=8;
            else if(a*4 <= b)
                a*=4;
            else if(a*2 <= b)
                a*=2;
            else
            {
                cout<<-1<<endl;
                return;
            }
            ans++;
            if(a==b)
            {
                cout<<ans<<endl;
                return;
            }
        }
        cout<<-1<<endl;
        return;
    }
    ans=0;
    if(b<a)
    {
        if(a&1)
        {
            cout<<-1<<endl;
            return;
        }
        while(b<=a)
        {
            if((a%8 == 0) && (a/8 >= b))
                a/=8;
            else if((a%4 == 0) && (a/4 >= b))
                a/=4;
            else if((a%2 == 0) && (a/2 >= b))
                a/=2;
            else
            {
                cout<<-1<<endl;
                return;
            }
            ans++;
            if(a==b)
            {
                cout<<ans<<endl;
                return;
            }
        }
        cout<<-1<<endl;
        return;
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

