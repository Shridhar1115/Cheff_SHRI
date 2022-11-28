#include<iostream>
using namespace std;
int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int a;
	    cin>>a;
	    if(a>100){
	        cout<<(a-10)<<endl;
	    }
	    else{
	        cout<<a<<endl;
	    }
	}
	return 0;
}