#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b;
	    cin>>a>>b;
	    b=b*b;
	    if((a/b)<=18) cout<<1<<endl;
	    else if((a/b)>18 && (a/b)<=24) cout<<2<<endl;
	    else if((a/b)>24 && (a/b)<=29) cout<<3<<endl;
	    else cout<<4<<endl;
	}
	return 0;
}
