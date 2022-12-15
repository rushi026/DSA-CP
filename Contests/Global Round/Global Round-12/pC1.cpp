/*
    Problem:            C1. Errich-Tac-Toe (Easy Version)
    Problem link:       https://codeforces.com/contest/1450/problem/C1
    Contest:            Codeforces Global Round 12
    Date:               06/12/2020
    Last Updated:       06/12/2020
    Author:             Rushiraj Parekh
*/

// WRONG ANSWER

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll long long int
#define ull unsigned long long int
#define loop(i, x, y, z) for (ll i = x; i < y; i += z)
#define rloop(i, x, y, z) for (ll i = x; i >= y; i -= z)
#define endl '\n'
#define vll vector<ll>
#define scan(v)       \
    for (auto &i : v) \
        cin >> i;
#define print(v)     \
    for (auto i : v) \
        cout << i << " ";
#define pb push_back
#define all(x) x.begin(), x.end()
#define _sort(x) sort(all(x))
#define speedy                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

/***********************************/
void solve()
{
    ll n;
    cin >> n;
    int i, j;
    char a[n][n];

    loop(i, 0, n, 1)
    {
        loop(j, 0, n, 1)
        {
            cin >> a[i][j];
        }
    }

    loop(i, 0, n, 1)
    {
        loop(j, 0, n, 1)
        {
            if (i % 3 == 1)
            {
                if (a[i][j] != '.' && j%3 == 1)
                {
                    a[i][j] = 'O';
                }
                if (a[i][j] != '.' && j%3 == 2)
                {
                    a[i][j] = 'X';
                }
                if (a[i][j] != '.' && j%3 == 0)
                {
                    a[i][j] = 'X';
                }
            }
            else if (i % 3 == 2)
            {
                if (a[i][j] != '.' && j%3 == 1)
                {
                    a[i][j] = 'X';
                }
                if (a[i][j] != '.' && j%3 == 2)
                {
                    a[i][j] = 'O';
                }
                if (a[i][j] != '.' && j%3 == 0)
                {
                    a[i][j] = 'X';
                }
            }
            else
            {
                
                if (a[i][j] != '.' && j%3 == 1)
                {
                    a[i][j] = 'X';
                }
                if (a[i][j] != '.' && j%3 == 2)
                {
                    a[i][j] = 'X';
                }
                if (a[i][j] != '.' && j%3 == 0)
                {
                    a[i][j] = 'O';
                }
            }
        }
    }
    loop(i, 0, n, 1)
    {
        loop(j, 0, n, 1)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}

/***********************************/
int main()
{
    speedy;
    ll t = 1;
    cin>>t;
    while (t--)
        solve();
    return 0;
}
