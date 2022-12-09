#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if (a>b) cout<<"LOSS\n";
	    else if (a==b) cout<<"NEUTRAL\n";
	    else cout<<"PROFIT\n";
	}
	return 0;
}
