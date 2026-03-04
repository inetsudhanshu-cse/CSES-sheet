#include <bits/stdc++.h>
using namespace std;
#define REP(i, x, y) for (int i = x; i < y; i++)
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    typedef long long ll;
    int n,k;
    cin>>n;
    int a[n];
    REP(i,0,n){
        cin>>a[i];
    }
    priority_queue<int> pq(a,a+n);
    cin>>k;
    int j=1;
   while ((pq.empty()==false) && j<k)
   {
    pq.pop();
    j++;
   }  
   cout<<pq.top()<<" ";
}