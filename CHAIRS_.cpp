#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b;
	    cin>>a>>b;
	    if(a>=b) cout<<(a-b)<<endl;
	    else cout<<0<<endl;
	}
	return 0;
}