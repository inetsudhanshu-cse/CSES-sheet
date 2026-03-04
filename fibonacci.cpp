#include <bits/stdc++.h>
#include<string.h>
using namespace std;
 #define REP(i,x,y) for(int i=x;i<y;i++)
int fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return fib(n-1)+fib(n-2);
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   typedef long long ll;
   int n;
   cin>>n;
   int x=fib(n);
   cout<<x<<" ";
   return 0;
   }