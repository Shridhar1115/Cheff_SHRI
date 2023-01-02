#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b,c,d,e;
	    cin>>a>>b>>c>>d>>e;
	    b=b+c+d+e;
	    if(b<=a) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
