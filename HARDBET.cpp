#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a<=b && a<=c) cout<<"Draw\n";
	    else if(b<=a && b<=c) cout<<"Bob\n";
	    else cout<<"Alice\n";
	}
	return 0;
}
