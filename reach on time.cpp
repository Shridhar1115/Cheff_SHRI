#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int a;
	    cin>>a;
	    if((a-30)>=0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}