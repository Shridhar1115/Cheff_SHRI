#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int H,P;
	    cin>>H>>P;
	    while(H>0 && P>0)
	    {
	        H-=P;
	        P/=2;
	    }
	    cout<<(H<=0?1:0)<<"\n";
    }
	// your code goes here
	return 0;
}
