#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t!=0){
	    t--;
	    int a;
	    cin>>a;
	    if(a==1) cout<<a<<endl;
	    else {
	        a=a/2;
	        a=a+1;
	        cout<<a<<endl;
	    }
	}
	return 0;
}
