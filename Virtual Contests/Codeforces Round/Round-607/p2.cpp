/*
    Problem:            B. Azamon Web Services
    Problem link:       https://codeforces.com/contest/1281/problem/B
    Contest:            Codeforces Round #607 (Div. 2)
    Date:               08/07/2020
    Last Updated:       08/07/2020
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
    string s,c;
    cin>>s>>c;
    if(s == c)
    {
        cout<<s<<endl;
        return;
    }
    ll a,b;
    a = s.length();
    b = c.length();
    ll n = min(a,b);
    ll i = 0,j;
    if(a<=b)
    {
        bool temp = true;
        loop(i,0,a,1)
        {
            if(s[i] != c[i])
            {
                temp = false;
                break;
            }
        }
        if(temp)
        {
            cout<<s<<endl;
            return;
        }
    }
    while(n--)
    {
        if(s[i] < c[i])
        {
            cout<<s<<endl;
            return;
        }
        if(s[i] == c[i])
        {
            i++;
            continue;
        }
        if(s[i] > c[i])
        {
            bool t = false;
            loop(j,i+1,a,1)
            {
                if(s[j] <= c[i])
                {
                    if(s[j] < c[i])
                    {
                        swap(s[j],s[i]);
                        cout<<s<<endl;
                        return;
                    }
                    else
                    {
                        swap(s[j],s[i]);
                        i++;
                        t = true;
                        break;
                    }
                }
                if(t)
                    continue;
            }
            cout<<"---"<<endl;
            return;
        }
    }
    cout<<"---"<<endl;
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

