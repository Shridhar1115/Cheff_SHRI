#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int count=0,a,b;
	    cin>>a>>b;
	    while(a>=0 && b>=0){
	        count++;
	        a=a-2;
	        b=b-1;
	    }
	    cout<<(count-1)<<endl;
	}
	return 0;
}
