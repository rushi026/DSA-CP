/*
    Problem link: https://codeforces.com/contest/1363/problem/B
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
    string s;
    cin>>s;
    int len = s.length();
    int pre = (-1), temp=0, i;
    bool f1 = true;
    loop(i,1,len)
    {
        pre++;
        if(s[pre] == s[i])
            continue;
        else
            temp++;
        if(temp>1)
        {
            f1 = false;
            break;
        }
    }
    if(f1)
    {
        cout<<0<<endl;
        return;
    }
    else
    {
        int z=0, o=0;
        loop(i,0,len)
        {
            if(s[i] == '0')
                z++;
            else
                o++;
        }
        if(z>o)
        {
            if((s[0] == '1') || (s[len-1] == '1'))
            {
                int t=0,b=0;
                loop(i,0,len)
                {
                    if(s[i] == '1')
                        t++;
                    else
                        break;
                }
                rloop(i,len-1,0)
                {
                    if(s[i] == '1')
                        b++;
                    else
                        break;
                }
                cout<<o-max(t,b)<<endl;
            }
            else
                cout<<o<<endl;
        }

        else if(o>z)
        {
            if((s[0] == '0') || (s[len-1] == '0'))
            {
                int t=0,b=0;
                loop(i,0,len)
                {
                    if(s[i] == '0')
                        t++;
                    else
                        break;
                }
                rloop(i,len-1,0)
                {
                    if(s[i] == '0')
                        b++;
                    else
                        break;
                }
                cout<<z-max(t,b)<<endl;
            }
            else
                cout<<z<<endl;
        }

        else
            cout<<z-1<<endl;
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
