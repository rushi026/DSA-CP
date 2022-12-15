/*
    Problem:            C. Minimum Varied Number
    Problem link:       https://codeforces.com/contest/1714/problem/C
    Contest:            Codeforces Round #811 (Div. 3)
    Date:               02/08/2022
    Last Updated:       02/08/2022
    Author:             Rushiraj Parekh
*/

#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n, current = 10;
    cin>>n;
    string ans = "";
    while(n) {
        current--;
        if(n <= current) {
            ans += n+48;
            break;
        }
        ans += current+48;
        n -= current;
    }
    for(int i=ans.length()-1; i>=0; i--) cout<<ans[i];
    cout<<endl;
}
 
 
int main() {
    long long t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}