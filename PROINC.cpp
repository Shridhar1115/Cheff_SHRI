#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int c=a+(a*0.1);
	    cout<<(c-(a-b))<<endl;
	}
	return 0;
}
