#include <bits/stdc++.h>
using namespace std;
#define REP(i,x,y) for(int i=x;i<y;i++)
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long count=1;
     sort(v.begin(),v.end());
    REP(i,1,n){
        if(v[i]!=v[i-1]){
            count++;
        }
    }  
    cout<<count<<"\n";      
    }