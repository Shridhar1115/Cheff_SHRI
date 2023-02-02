#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if((b*c)>=a) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
