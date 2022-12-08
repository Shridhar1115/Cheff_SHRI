#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a;
	    cin>>a;
	    if((a%3)==1){
	        cout<<2<<endl;
	    }
	    else if((a%3)==2){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
