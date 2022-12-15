/*
    Problem:            B. New Year's Number
    Problem link:       https://codeforces.com/contest/1475/problem/B
    Contest:            Codeforces Round #697 (Div. 3)
    Date:               25/01/2020
    Last Updated:       25/01/2020
    Author:             Rushiraj Parekh
*/

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
    if (n % 2020 == 0 || n % 2021 == 0)
    {
        cout << "YES" << endl;
        return;
    }
    if (n < 2020)
    {
        cout << "NO" << endl;
        return;
    }
    while (n > 0)
    {
        if (n & 1)
        {
            n -= 2021;
            if (n % 2020 == 0 || n % 2021 == 0)
            {
                cout << "YES" << endl;
                return;
            }
        }
        else
        {
            n -= 2020;
            if (n % 2020 == 0 || n % 2021 == 0)
            {
                cout << "YES" << endl;
                return;
            }
        }
        if (n != 0 && n < 2020)
        {
            cout << "NO" << endl;
            return;
        }
    }
}

/***********************************/
int main()
{
    speedy;
    ll t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
