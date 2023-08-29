#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int j=0;j<t;j++){
	    int n;
	    cin>>n;
	    if(n>100 && n<=1000){
	        cout<<(n-25)<<endl;
	    }
	    else if(n>1000 && n<=5000){
	        cout<<(n-100)<<endl;
	    }
	    else if(n>5000){
	        cout<<(n-500)<<endl;
	    }
	    else{
	        cout<<n<<endl;
	    }
	}
	return 0;
}
