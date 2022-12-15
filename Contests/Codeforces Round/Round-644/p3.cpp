/*
    Problem link: https://codeforces.com/contest/1360/problem/C
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
    int n;
    cin>>n;
    int s[n];
    int o=0,e=0;
    loop(i,0,n)
    {
        cin>>s[i];
        if(s[i]&1)
            o++;
        else
            e++;
    }
    if(!(o&1))
    {
        cout<<"YES"<<endl;
        return;;
    }

    loop(i,0,n-1)
    {
        loop(j,1,n)
        {
            if(((s[i]&1) && (!(s[j]&1)))  ||  ((s[j]&1) && (!(s[i]&1))))
            {
                if((s[i]-s[j] == 1) || (s[i]-s[j]== (-1)))
                {
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
    }
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
