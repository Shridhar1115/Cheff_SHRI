#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,a,count=0;
	    cin>>n;
	    for(int j=0;j<n;j++){
	        cin>>a;
	        if(a>=1000) {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
