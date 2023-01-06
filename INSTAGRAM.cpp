#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,y;
	    cin>>x>>y;
	    y=y*10;
	    if(x>y) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
