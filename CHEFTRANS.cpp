#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if((x+y)<z) cout<<"PLANEBUS\n";
	    else if((x+y)>z) cout<<"TRAIN\n";
	    else cout<<"EQUAL\n";
	}
	return 0;
}
