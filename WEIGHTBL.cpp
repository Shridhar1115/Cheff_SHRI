#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,e;
	    cin>>a>>b>>c>>d>>e;
	    int q,p,r;
	    q=b-a;
	    p=c*e;
	    r=d*e;
	    if (q==p || q==r) cout<<"1\n";
	    else if (q>=p && q<=r) cout<<"1\n";
	    else cout<<"0\n";
	    
	}
	return 0;
}
