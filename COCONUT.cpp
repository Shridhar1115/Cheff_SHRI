#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    a=(c/a);
	    b=(d/b);
	    cout<<a+b<<endl;
	}
	return 0;
}
