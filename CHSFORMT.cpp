#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(a+b<3) cout<<"1\n";
	    else if((a+b)>=3 && (a+b)<=10) cout<<"2\n";
	    else if((a+b)>=11 && (a+b)<=60) cout<<"3\n";
	    else if(a+b>60) cout<<"4\n";
	}
	return 0;
}
