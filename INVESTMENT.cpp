#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b;
	    cin>>a>>b;
	    b=b*2;
	    if(b<=a){
	        cout<<"YES\n";
	    }
	    else cout<<"NO\n";
	}
	return 0;
}
