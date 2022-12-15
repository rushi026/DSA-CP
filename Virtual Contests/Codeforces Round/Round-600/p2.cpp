/*
    Problem link:   https://codeforces.com/contest/1253/problem/B
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
    ll a[n];
    ll i, j, k = 0, next = 0, b[n];
    bool temp = false, ans = true;
    loop(i,0,n)
    {
        cin>>a[i];
        if(a[i] < 0)
        {
            loop(j,k,i)
            {
                if(a[j] == abs(a[i]))
                {
                    temp = true;
                    break;
                }
            }
            if(temp)
            {
                a[i] = 0;
                continue;
            }
            else
            {
                ans = false;
            }
        }
        else
        {
            loop(j,k,i)
            {
                if(a[i] == a[j])
                {
                    b[next++] = i+1;
                    k = i+1;
                }
            }
        }
    }
    cout<<next+1<<endl;
    if(next == 0)
        cout<<n<<endl;
    else
        loop(i,0,next)
        cout<<b[i]<<" "<<endl;
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
