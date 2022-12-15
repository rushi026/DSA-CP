/*
    Problem:            A. Sequence with Digits
    Problem link:       https://codeforces.com/contest/1355/problem/A
    Contest:            Codeforces Round #643 (Div. 2)
    Date:               19/05/2020
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

int minD(ll n)
{
    int temp=0,i=0;
    int ar[20];
    while(n!=0)
    {
        ar[i] = n%10;
        n/=10;
        i++;
    }
    temp = ar[0];
    for(int j=1; j<i; j++)
    {
        if(ar[j] < temp)
            temp = ar[j];
    }
    return temp;
}

int maxD(ll n)
{
    int temp=0,i=0;
    int ar[20];
    while(n!=0)
    {
        ar[i] = n%10;
        n/=10;
        i++;
    }
    temp = ar[0];
    for(int j=1; j<i; j++)
    {
        if(ar[j] > temp)
            temp = ar[j];
    }
    return temp;
}

void solve()
{
    ll a1,k;
    cin>>a1>>k;
    if(k==1)
    {
        cout<<a1<<endl;
        return;
    }
    k--;
    while(k--)
    {
        if(minD(a1) * maxD(a1) == 0)
            break;
        a1 = a1 + ((minD(a1))*(maxD(a1)));
    }
    cout<<a1<<endl;
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
