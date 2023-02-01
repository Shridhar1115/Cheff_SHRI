#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if((a+b)<=(c+d)) cout<<(a+b)<<endl;
	    else cout<<(c+d)<<endl;
	}
	return 0;
}
