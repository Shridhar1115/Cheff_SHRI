#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int j=0;j<t;j++){
	    int n,x;
	    cin>>n>>x;
	    n=n*x;
	    if(n%4!=0){
	        cout<<(n/4)+1<<endl;
	    }
	    else{
	        cout<<(n/4)<<endl;
	    }
	}
	return 0;
}
