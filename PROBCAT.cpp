#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    if((n>=1) && (n<100)){
	    cout<<"Easy\n";
	    }
	    else if((n>=100) && (n<200)){
	    cout<<"Medium\n";
	    }
	    else if((n>=200) && (n<=300)){
	    cout<<"Hard\n";
	    }
	}
	return 0;
}
