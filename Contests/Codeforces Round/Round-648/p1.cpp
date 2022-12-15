/*
    Problem link: https://codeforces.com/contest/1365/problem/A
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
    int n,m;
    cin>>n>>m;
    int i,j,k;
    int a[n][m];
    loop(i,0,n)
    {
        loop(j,0,m)
        cin>>a[i][j];
    }
    bool turn = true;
    loop(i,0,n)
    {
        loop(j,0,m)
        {
            if(a[i][j] == 0)
            {
                bool rowCheck=true, columnCheck=true;

                loop(k,0,m)
                {
                    if(a[i][k] == 1)
                    {
                        rowCheck = false;
                        break;
                    }
                }

                loop(k,0,n)
                {
                    if(a[k][j] == 1)
                    {
                        columnCheck = false;
                        break;
                    }
                }

                if(rowCheck && columnCheck)
                {
                    a[i][j] = 1;
                    if(turn)
                        turn = false;
                    else
                        turn = true;
                    continue;
                }
                continue;
            }
            continue;
        }
    }
    if(turn)
        cout<<"Vivek"<<endl;
    else
        cout<<"Ashish"<<endl;
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

