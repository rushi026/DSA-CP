/*
    Problem:            C. Social Distance
    Problem link:       https://codeforces.com/contest/1367/problem/C
    Contest:            Codeforces Round #650 (Div. 3)
    Date:               16/05/2020
    Last Updated:       17/05/2020
    Author:             Rushiraj Parekh
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll                  long long int
#define ull                 unsigned long long int
#define loop(i,x,y,z)       for(ll i=x; i<y; i+=z)
#define rloop(i,x,y,z)      for(ll i=x; i>=y; i-=z)
#define endl                '\n'
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


/***********************************/
void solve()
{
    ll n,k,ans=0;
    cin>>n>>k;
    char s[n];
    cin>>s;
    if(n==1 && s[0]=='0')
    {
        cout<<1<<endl;
        return;
    }
    if(n==2 && s[0]=='0' && s[1]=='0')
    {
        cout<<1<<endl;
        return;
    }
    ll i,j;
    loop(i,0,n,1)
    {
        if(s[i] == '0')
        {
            bool temp = true;
            ll last = i+k;
            if(last>n)
                last = n-1;
            loop(j,i+1,last+1,1)
            {
                if(s[j] == '0')
                    continue;
                else
                {
                    i = j;
                    temp = false;
                    break;
                }
            }
            if(temp)
            {
                s[i] = '1';
                i += k;
                ans++;
                continue;
            }
        }
        else
        {
            i += k;
            if(i>=n)
                break;
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
