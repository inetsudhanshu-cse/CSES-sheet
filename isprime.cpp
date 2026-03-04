#include <bits/stdc++.h>
using namespace std;
#define REP(i, x, y) for (int i = x; i < y; i++)
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    typedef long long ll;
   int n;
   cin>>n;
   bool flag=false;
   if(n==1){
    cout<<"NO"; return 0;
   } 
   if(n==2 || n==3){
   cout<<"YES"; return 0;
   }
   if(n%2==0 || n%3==0){
   cout<<"NO"; return 0;}
   for(int i=5;i*i<=n;i=i+6)
    if(n%i==0 || n%(i+2)==0){
       cout<<"NO"; return 0;
   }
   cout<<"YES"; return 0;
}