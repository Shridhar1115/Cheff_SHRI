#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	   int n,k,m;
	    cin>>n>>k>>m;
	    int a = n/(k*m);
	    if(n%(k*m)==0){
	    cout<<a<<endl;
	    }
	    else{
	    cout<<a+1<<endl;
	    }
	}
	return 0;
}
