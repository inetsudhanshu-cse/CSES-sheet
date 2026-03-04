#include <bits/stdc++.h>
using namespace std;
#define REP(i, x, y) for (int i = x; i < y; i++) 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    typedef long long ll;
       int arr[]={-2,1,-3,4,-1,2,1,-5,4};
       int n=sizeof(arr)/sizeof(arr[0]);
       int start=0;
       int end=0;
      int maxEnding=arr[0];
      int res=arr[0];
       for(int i=1;i<n;i++)
       {
          maxEnding=max(arr[i],maxEnding+arr[i]);
         res=max(res,maxEnding);
       }
       cout<<res;   
}
