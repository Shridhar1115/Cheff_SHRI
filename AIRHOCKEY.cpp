#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(a>=b){
	        cout<<(7-a)<<endl;
	    }
	    else{
	        cout<<(7-b)<<endl;
	    }
	}
	return 0;
}
