#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a;
	    cin>>a;
	    if((a%25)!=0){
	        cout<<(a/25)+1<<endl;
	    }
	    else cout<<(a/25)<<endl;
	}
	return 0;
}
