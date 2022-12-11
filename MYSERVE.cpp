#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b;
	    cin>>a>>b;
	if((a+b)%4==0 || (a+b)%4 == 1){
	        cout << "Alice\n";
	    }
	    else if((a+b)%4==2 || (a+b)%4 == 3){
	        cout << "Bob\n";
	    }
}
return 0;
}
