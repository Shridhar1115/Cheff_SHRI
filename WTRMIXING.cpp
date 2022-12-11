#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a==b){
	        cout<<"YES\n";
	    }
	    else if((a>b) && (a-b)<=d){
	        cout<<"YES\n";
	    }
	    else if((b>a) && (b-a)<=c){
	        cout<<"YES\n";
	    }
	    else cout<<"NO\n";
	    
	}
	return 0;
}
