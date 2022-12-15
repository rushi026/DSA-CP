/*
    Problem link: https://codeforces.com/contest/1353/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int S(int arr[],int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        if(arr[temp] > arr[i])
            temp = i;
    }
    return temp;
}

int B(int arr[],int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        if(arr[temp] < arr[i])
            temp = i;
    }
    return temp;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        while(k--)
        {
            int sOfA = S(a,n), bOfB = B(b,n);
            if(a[sOfA] < b[bOfB])
                swap(a[sOfA], b[bOfB]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
            ans+=a[i];
        cout<<ans<<endl;
    }
    return 0;
}
