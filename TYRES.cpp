#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    n=n%4;
	    if(n/2) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
