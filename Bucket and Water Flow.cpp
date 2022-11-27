#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    if((x-w)==(y*z)){
	        cout<<"filled"<<endl;
	    }
	    else if((x-w)<(y*z)){
	        cout<<"overFlow"<<endl;
	    }
	    else{
	        cout<<"Unfilled"<<endl;
	    }
	}
	return 0;
}