/*
    Problem:            A. Everyone Loves to Sleep
    Problem link:       https://codeforces.com/contest/1714/problem/A
    Contest:            Codeforces Round #811 (Div. 3)
    Date:               02/08/2022
    Last Updated:       02/08/2022
    Author:             Rushiraj Parekh
*/


#include <bits/stdc++.h>
 
using namespace std;
 
bool isBigger(long long h1, long long m1, long long h2, long long m2) {
    if(h1 > h2) return true;
    if(h1 == h2 && m1 > m2) return true;
    return false;
}
 
void solve() {
    long long n, H, M, ansH = 24, ansM = 59;
    cin>>n>>H>>M;
    while(n--) {
        long long h, m, tempH = 0, tempM = 0;
        cin>>h>>m;
        if(m<M) {
            m += 60;
            h--;
            if(h == -1) h = 23;
        }
        if(h<H) {
            h += 24;
            h %= 24;
        }
        tempH = h-H; tempM = m-M;
        if (tempH < 0) tempH += 24;
        if(isBigger(ansH, ansM, tempH, tempM)) {ansH = tempH; ansM = tempM; }
    }
    cout<<ansH<<" "<<ansM<<endl;
}
 
 
int main() {
    long long t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}