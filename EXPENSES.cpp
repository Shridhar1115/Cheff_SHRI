#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,m,a=1;
	    cin>>n>>m;
	    for(int k=0;k<m;k++){
	        a=a*2;
	    }
	    for(int j=0;j<n;j++){
	        a=a/2;
	    }
	    cout<<a<<endl;
	}
	return 0;
}
