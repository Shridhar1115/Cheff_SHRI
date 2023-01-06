#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int h,x,y,c;
	    cin>>h>>x>>y>>c;
	    x=x+(y/2);
	    h=h*x;
	    if(h<=c) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
