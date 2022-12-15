/*
    Problem link: https://codeforces.com/contest/1342/problem/A
*/
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,a,b,amt=0;
        cin>>x>>y>>a>>b;
        if(x<0)
            x -= (2*x);
        if(y<0)
            y -= (2*y);
        if(x<=y)
        {
            y -= x;
            amt += b*x;
            x=0;
            amt += a*y;
            y=0;
        }
        else
        {
            x -= y;
            amt += b*y;
            y=0;
            amt += a*x;
            x=0;
        }
        cout<<amt<<endl;
    }
    return 0;
}
