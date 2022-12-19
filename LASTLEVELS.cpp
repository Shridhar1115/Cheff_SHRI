#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x<=3) cout<<(x*y)<<endl;
	    else if(x%3!=0){
	        cout<<((x*y)+((x/3)*z))<<endl;
	    }
	    else{
	        cout<<((x*y)+(((x-1)/3)*z))<<endl;
	    }
	}
	return 0;
}
