#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x;
	    cin>>x;
	    if(x>65) cout<<"Overload\n";
	    else if(x<35) cout<<"Underload\n";
	    else cout<<"Normal\n";
	}
	return 0;
}
