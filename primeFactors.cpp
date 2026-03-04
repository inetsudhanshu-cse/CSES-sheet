#include <bits/stdc++.h>
using namespace std;
 #define REP(i,x,y) for(int i=x;i<y;i++)
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   typedef long long ll;
   int n;
   cin>>n;
   for(int i=2;i*i<=n;i++)
   {
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
   }
   if(n>1)
   cout<<n<<" ";
}