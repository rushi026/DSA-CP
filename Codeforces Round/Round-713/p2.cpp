/*
    Problem:            Almost Rectangle
    Problem link:       https://codeforces.com/contest/1512/problem/B
    Contest:            Codeforces Round #713 (Div. 3)
    Date:               10/04/2021
    Last Updated:       10/04/2021
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
#define ins(vec,pos,val)    vec.emplace(vec.begin()+pos, val)
#define del(vec,pos)        vec.erase(vec.begin()+pos)                


/***********************************/
void solve()
{
    ll n;
    cin>>n;
    char a[n][n];
    ll i,j, x1,y1, x2,y2; bool temp = true;
    loop(i,0,n,1)
    {
        loop(j,0,n,1)
        {
            cin>>a[i][j];
            if(a[i][j] == '*')
            {
                if(temp)
                {
                    x1 = i; y1 = j;
                    temp = false;
                }
                else
                {
                    x2 = i;
                    y2 = j;
                }
            }
        }
    }

    if(x1 == x2 || y1 == y2)
    {
        if(x1 == x2){
            if(x1+1 == n || x2+1 == n)
            {
            a[x1-1][y1] = '*'; a[x2-1][y2] = '*';
            }
            else{
            a[x1+1][y1] = '*'; a[x2+1][y2] = '*';
            }
        }
        else{
            if(y1+1 == n || y2+1 == n)
            {

            a[x1][y1-1] = '*'; a[x2][y2-1] = '*';
            }
            else{

            a[x1][y1+1] = '*'; a[x2][y2+1] = '*';
            }
        }
    }
    else{
        a[x1][y2] = '*'; a[x2][y1] = '*';
    }

    loop(i,0,n,1)
    {
        loop(j,0,n,1)
            cout<<a[i][j];
        cout<<endl;
    }
}

/***********************************/
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("D:/Programming/codeforces/Contests/input.txt", "r", stdin);
        freopen("D:/Programming/codeforces/Contests/output.txt", "w", stdout);
    #endif
    
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
