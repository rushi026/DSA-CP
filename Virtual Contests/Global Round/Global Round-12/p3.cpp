/*
    # Virtual Contest 
    Problem:            C1. Errich-Tac-Toe (Easy Version)
    Problem link:       https://codeforces.com/contest/1450/problem/C1
    Contest:            Codeforces Global Round 12
    Date:               23/04/2021
    Last Updated:       23/04/2021
    Author:             Rushiraj Parekh
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll                  long long int
#define ull                 unsigned long long int
#define loop(i,x,y,z)       for(ll i=x; i<y; i+=z)
#define rloop(i,x,y,z)      for(ll i=x; i>=y; i-=z)
#define ee                  '\n'
#define vll                 vector<ll>
#define scan(v)             for(auto &i : v) cin>>i;
#define print(v)            for(auto i : v) cout<<i<<" ";
#define pb                  push_back
#define all(x)              x.begin(),x.end()
#define _sort(x)            sort(all(x))
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ins(vec,pos,val)    vec.emplace(vec.begin()+pos, val)
#define del(vec,pos)        vec.erase(vec.begin()+pos)  

/**********************************/

ll power(ll x, ll y, ll p = 1e9+7) 
{ 
    ll res = 1;
    x = x ;
    while(y>0) 
    { 
        if(y&1) {
            res = (res*x);
        }
        x = (x*x);
        y = y>>1;
    }
    return res;
}


/***********************************/
void solve()
{
    ll n;
    cin>>n;
    vector< vector<char> > a(n, vector<char> (n));
    ll i,j;
    loop(i,0,n,1){
        scan(a[i]);
    }

    ll c=0;
    loop(i,1,n-1,1){
        loop(j,1,n-1,1){
            if(a[i][j] == 'X'){
                if(a[i][j-1] == 'X' && a[i][j+1] == 'X'){
                    if(a[i-1][j] == 'X' && a[i+1][j] == 'X'){
                        a[i][j] = 'O';
                        c++;
                    }
                }
            }
        }
    }

    loop(i,1,n-1,1){
        loop(j,1,n-1,1){
            if(a[i][j] == 'X'){
                if(a[i][j-1] == 'X' && a[i][j+1] == 'X'){
                    a[i][j] = 'O';
                    c++;
                }
                if(a[i-1][j] == 'X' && a[i+1][j] == 'X'){
                    a[i][j] = 'O';
                    c++;
                }
            }
        }
    }

    loop(i,1,n-1,1){
        if(a[0][i] == 'X'){
            if(a[0][i-1] == 'X' && a[0][i+1] == 'X'){
                a[0][i] = 'O';
                c++;
            }
        }
    }

    loop(i,1,n-1,1){
        if(a[n-1][i] == 'X'){
            if(a[n-1][i-1] == 'X' && a[n-1][i+1] == 'X'){
                a[n-1][i] = 'O';
                c++;
            }
        }
    }

    loop(i,1,n-1,1){
        if(a[i][0] == 'X'){
            if(a[i-1][0] == 'X' && a[i+1][0] == 'X'){
                a[i][0] = 'O';
                c++;
            }
        }
    }

    loop(i,1,n-1,1){
        if(a[i][n-1] == 'X'){
            if(a[i-1][n-1] == 'X' && a[i+1][n-1] == 'X'){
                a[i][n-1] = 'O';
                c++;
            }
        }
    }

    loop(i,0,n,1){
        loop(j,0,n,1){
            cout<<a[i][j];
        }
        cout<<ee;
    }

}

/***********************************/
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("D:/Programming/codeforces/Virtual Contests/input.txt", "r", stdin);
        freopen("D:/Programming/codeforces/Virtual Contests/output.txt", "w", stdout);
    #endif
    
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
