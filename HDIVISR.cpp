#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,ans;
	cin>>n;
	for(int i=1;i<=10;i++){
	    if(n%i==0) ans=i;
	}
	cout<<ans<<endl;
	return 0;
}
