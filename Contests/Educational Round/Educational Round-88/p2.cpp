/*
    Problem link: https://codeforces.com/contest/1359/problem/B
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
    ll n,m,x,y,i,j,ans=0;
    cin>>n>>m>>x>>y;
    char a[n][m];
    loop(i,0,n)
    {
        loop(j,0,m)
            cin>>a[i][j];
    }
    loop(i,0,n)
    {
        loop(j,0,m)
        {
            if(a[i][j] == '.')
            {
                if((a[i][j+1] == '.') && j<(m-1))
                {
                    if(2*x < y)
                        ans += (2*x);
                    else
                        ans += y;
                    j++;
                }
                else
                    ans += x;
            }
        }
    }
    cout<<ans<<endl;
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

