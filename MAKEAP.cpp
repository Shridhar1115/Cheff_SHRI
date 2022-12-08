#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b;
	    cin>>a>>b;
	    if((b-a)%2==0) {
	        cout<<(b+a)/2<<endl;
	    }
	    else cout<<"-1"<<endl;
	}
	return 0;
}
