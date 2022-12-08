#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long int n,count=0;
	    cin>>n;
	    long int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    for(int i=0;i<n-1;i++){
	        if(abs(a[i]-a[i+1])<=1) count++;
	    }
	    if(count==(n-1)) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	// your code goes here
	return 0;
}
