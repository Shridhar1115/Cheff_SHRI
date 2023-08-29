#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int j=0;j<t;j++){
	    int x,y;
	    cin>>x>>y;
	    if(x<=(y*2)){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
