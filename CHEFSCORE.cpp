#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z,count=0;
	    cin>>x>>y>>z;
	    for(int i=0;i<=x;i++){
	        if(y*i==z) {cout<<"YES\n";
	        count++;
	    }
	    }
	    if (count==0) {cout<<"NO\n";}
	}
	return 0;
}
