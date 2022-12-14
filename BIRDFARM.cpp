#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(c%a!=0 && c%b!=0){
	        cout<<"NONE\n";
	    }
	    else if(c%a==0 && c%b==0){
	        cout<<"ANY\n";
	    }
	    else if(c%a==0) cout<<"CHICKEN\n";
	    else if(c%b==0) cout<<"DUCK\n";
	}
	return 0;
}
