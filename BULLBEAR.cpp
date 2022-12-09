#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b;
	    cin>>a>>b;
	    if(a>b) cout<<"LOSS\n";
	    else if(a==b) cout<<"NEUTRAL\n";
	    else cout<<"PROFIT\n";
	}
	return 0;
}
