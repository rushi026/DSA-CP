/*
    Problem:            B. Find the Spruce
    Problem link:       https://codeforces.com/contest/1461/problem/B
    Contest:            Codeforces Round #689
    Date:               11/12/2020
    Last Updated:       11/12/2020
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
#define vll                 vector<ll>
#define scan(v)             for(auto &i : v) cin>>i;
#define print(v)            for(auto i : v) cout<<i<<" ";
#define pb                  push_back
#define all(x)              x.begin(),x.end()
#define _sort(x)            sort(all(x))
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


/***********************************/
void solve()
{
    ll n,m;
    cin>>n>>m;
    ll i,j, c=0;
    char mat[n][m];
    loop(i,0,n,1)
    {
        loop(j,0,m,1) {
            cin>>mat[i][j];
            if(mat[i][j] == '*')
                c++;
        }
    }
    loop(i,0,n-1,1) {
        loop(j,1,m-1,1) {
            if(mat[i][j] == '*') {
                ll ki,kj,_temp = 1;
                bool _b = true;
                loop(ki,i+1,n,1) {
                    _b = true;
                    if(mat[ki][j] == '*') {
                        kj = j;
                        ll temp = _temp;
                        while(temp--) {
                            kj++;
                            if(mat[ki][kj] == '*' && kj<m)
                                continue;
                            else
                            {
                                _b = false;
                                break;
                            }
                        }
                        kj = j;
                        temp = _temp;
                        while(temp--) {
                            kj--;
                            if(mat[ki][kj] == '*' && kj>=0)
                                continue;
                            else
                            {
                                _b = false;
                                break;
                            }
                        }
                        if(_b) 
                            c++;
                        else
                            break;
                    }
                    if(!_b) 
                        break;
                    _temp++;
                }
            }
            else {
                continue;
            }
        }
    }
    cout<<c<<endl;
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
