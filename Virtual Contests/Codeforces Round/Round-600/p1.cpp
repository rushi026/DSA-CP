/*
    Problem link:   https://codeforces.com/contest/1253/problem/A
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
    ll n;
    cin>>n;
    ll a[n], b[n];
    ll i,diff=0, diff2=0;
    loop(i,0,n)
    cin>>a[i];
    bool temp = true, temp2 = false, flag = false;
    loop(i,0,n)
    {
        cin>>b[i];
        if(temp2)
        {
            diff2 = b[i] - a[i];
            if(diff2 == 0)
            {
                flag = true;
                continue;
            }
        }
        if(!(b[i] == a[i]))
        {
            if(flag)
                temp = false;
            if(temp2)
            {
                diff2 = b[i] - a[i];
                if(diff2 != diff)
                    temp = false;
            }
            else
            {
                diff = b[i] - a[i];
                if(diff < 0)
                    temp = false;
                temp2 = true;
            }
        }
    }
    if(temp)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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

