#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a-b<0){
	        int temp=a;
	        a=b;
	        b=temp;
	    }
	    if((a-b)%c!=0){
	        cout<<((a-b)/c)+1<<endl;
	    }
	    else cout<<((a-b)/c)<<endl;
	}
	return 0;
}
