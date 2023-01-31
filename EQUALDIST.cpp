#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
	    int x,y;
	    cin>>x>>y;
	    int a = x+y;
	    if(a%2==0) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}
	// your code goes here
	return 0;
}
