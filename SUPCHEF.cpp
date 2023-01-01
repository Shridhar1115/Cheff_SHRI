#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int t,m,k;
	    cin>>t>>m>>k;
	    k=k*m;
	    if(k<t) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
