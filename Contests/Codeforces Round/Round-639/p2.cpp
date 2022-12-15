/*
    Problem link: https://codeforces.com/contest/1345/problem/B
*/

#include<iostream>
using namespace std;

typedef long long int ll;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    //t=1;
    while(t--)
    {
        ll n;
        cin>>n;
        long int temp = 0,ans =0;
        while(n>=2)
        {
            for(int i=1; ((3*i*i)+i)/2.0 <= (float)n ; i++)
            {
                if(((3*i*i)+i)/2.0 == (float)n)
                {
                    temp = i;
                }
            }
            ans++;
            n = n - (((3*temp*temp)+temp)/2);
        }
        cout<<ans<<endl;
    }
    return 0;
}
