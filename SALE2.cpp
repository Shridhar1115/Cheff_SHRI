#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b;
	    cin>>a>>b;
	    int c=a/3;
	    cout<<((a-c)*b)<<endl;
	}
	return 0;
}
