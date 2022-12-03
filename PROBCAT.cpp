#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,i;
	cin>>t;
	for (i=0;i<t;i++){
	    int n;
	    cin>>n;
	    if (1<=n && n<100) cout<<"Easy\n";
	    else if (100<=n && n<200)  cout<<"Medium\n";
	    else cout<<"Hard\n";
	}
	return 0;
}
