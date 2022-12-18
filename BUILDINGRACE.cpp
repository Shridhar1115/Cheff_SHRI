#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    float a,b,c,d;
	    cin>>a>>b>>c>>d;
	    a=a/c;
	    b=b/d;
	    if(a<b) cout<<"Chef\n";
	    else if(a>b) cout<<"Chefina\n";
	    else cout<<"Both\n";
	}
	return 0;
}
