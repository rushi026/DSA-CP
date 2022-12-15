/*
    Problem:            A-B Palindrome
    Problem link:       https://codeforces.com/contest/1512/problem/C
    Contest:            Codeforces Round #713 (Div. 3)
    Date:               11/04/2021
    Last Updated:       11/04/2021
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
    ll a,b,i,n, c=0;
    string s;
    cin>>a>>b;
    cin>>s;
    n=a+b; bool ans = true;

    if(n == 1)
    {
        if(a==1 && s[0] == '?') {cout<<"0"<<endl; return;}
        else if(b == 1 && s[0] == '?') {cout<<"1"<<endl; return;}
    }

    ll n0 = 0, n1 = 0;
    loop(i,0,n,1)
    {
        if(s[i] == '0') n0++;
        else if(s[i] == '1') n1++;
        if(n0 > a || n1>b)
        {
            cout<<-1<<endl; return;
        }
    }

    loop(i,0,ceil(n/2.0),1)
    {
        if(s[i] == '0')
        {   
            a--;
            if(s[n-i-1] == '?') 
            {
                if(a>0) {s[n-i-1] = '0'; a--;}
                else {ans = false; break;}
            }
            else if(s[n-i-1] == '0') 
            {
                if(i != n-i-1)
                {a--; continue;}
            }
            else {ans = false; break;}
            if(a<0) {ans = false; break;}
            if(!ans) break;
        }
        else if(s[i] == '1')
        {
            b--;
            if(s[n-i-1] == '?') 
            {
                if(b>0) {s[n-i-1] = '1'; b--;}
                else {ans = false; break;}
            }
            else if(s[n-i-1] == '1') 
            {
                if(i != n-i-1) 
                {b--; continue;}
            }
            else {ans = false; break;}
            if(b<0) {ans = false; break;}
            if(!ans) break;
        }
        else
        {
            if(s[n-1-i] == '0')
            {
                a--;
                if(a>0) {s[i] = '0'; a--;}
                else ans = false;
            }
            else if(s[n-i-1] == '1')
            {
                b--;
                if(b>0) {s[i] = '1'; b--;}
                else ans = false;
            }
            else
            {
                if(i != n-1-i) c+=2;
                else c++;
            }
        }
    }

    // cout<<s<<endl;
    // cout<<c<<a<<b<<endl;
    if(!ans) cout<<-1<<endl;
    else
    {
        loop(i,0,ceil(n/2.0),1)
        {
            if(s[i] == '?' && s[n-i-1] == '?')
            {   
                if(a>1) {s[i] = '0'; s[n-i-1] = '0'; a-=2;}
                else if(b>1) {s[i] = '1'; s[n-i-1] = '1'; b-=2;}
                else {cout<<-1<<endl; return;}
                continue;
            }
            if(n&1)
            {
                if(s[floor(n/2.0)] == '?') 
                {
                    if(a&1) s[floor(n/2.0)] = '0';
                    if(b&1) s[floor(n/2.0)] = '1';
                }
            }
        }
        cout<<s<<endl;
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
