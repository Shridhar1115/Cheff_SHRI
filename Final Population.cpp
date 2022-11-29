#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    a=a-b+c;
	    cout<<a<<endl;
	}
	return 0;
}