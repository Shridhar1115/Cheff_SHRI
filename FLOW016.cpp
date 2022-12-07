#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    long a,b,gcd,lcm;
	    cin>>a>>b;
	    gcd = __gcd(a,b);
	    lcm = (a*b)/gcd;
	    cout << gcd << " " << lcm << endl;
	}
	return 0;
}
