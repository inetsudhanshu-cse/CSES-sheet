#include <iostream>
using namespace std;

int main() {
    int t,n,x;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    int y=n*x;
	    if(y%4==0){
	        cout<<y/4<<"\n";
	    }
	    else cout<<(y/4)+1<<"\n";
	}
}
