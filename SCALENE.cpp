#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a==b || b==c || a==c) cout<<"NO\n";
	    else cout<<"YES\n";
	}
	return 0;
}
