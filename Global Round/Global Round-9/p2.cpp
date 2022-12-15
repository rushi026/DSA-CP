/*
    Problem:            B. Neighbor Grid
    Problem link:       https://codeforces.com/contest/1375/problem/B
    Contest:            Codeforces Global Round 9
    Date:               04/07/2020
    Last Updated:       04/07/2020
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
    ll n,m;
    cin>>n>>m;
    ll i,j;
    ll a[n][m];
    bool temp = true;
    loop(i,0,n,1)
    {
        loop(j,0,m,1)
        {
            cin>>a[i][j];
            if(a[i][j] > 4)
                temp = false;
        }
    }
    ll k;
    if(temp)
    {
        loop(k,1,m-1,1)
        {
            if(a[0][k] > 3)
            {
                temp = false;
                break;
            }
            a[0][k] = 3;
        }
    }
    if(temp)
    {
        loop(k,1,n-1,1)
        {
            if(a[k][0] > 3)
            {
                temp = false;
                break;
            }
            a[k][0] = 3;
        }
    }
    if(temp)
    {
        loop(k,1,n-1,1)
        {
            if(a[k][m-1] > 3)
            {
                temp = false;
                break;
            }
            a[k][m-1] = 3;
        }
    }
    if(temp)
    {
        loop(k,1,m-1,1)
        {
            if(a[n-1][k] > 3)
            {
                temp = false;
                break;
            }
            a[n-1][k] = 3;
        }
    }

    if(temp)
    {
        if(a[0][0] > 2)
            temp = false;
        if(a[0][m-1] > 2)
            temp = false;
        if(a[n-1][0] > 2)
            temp = false;
        if(a[n-1][m-1] > 2)
            temp = false;
    }

    if(!temp)
    {
        cout<<"NO"<<endl;
        return;
    }
    else
    {
        cout<<"YES"<<endl;
        a[0][0] = 2;
        a[0][m-1] = 2;
        a[n-1][0] = 2;
        a[n-1][m-1] = 2;

        loop(i,0,n,1)
        {
            loop(j,0,m,1)
            {
                if(i>0 && j>0 && i<n-1 && j<m-1)
                    cout<<4<<" ";
                else
                    cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
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

