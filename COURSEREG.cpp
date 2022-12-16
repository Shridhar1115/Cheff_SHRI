#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
	    int a[3];
	    for(int i=0;i<3;i++){
	        cin>>a[i];
	    }
	    if((a[1]-a[2])>=a[0]) cout<<"Yes\n";
	    else cout<<"No\n";
	}
	return 0;
}
