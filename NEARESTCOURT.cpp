#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b;
	    cin>>a>>b;
	    int c=(a+b)/2;
	    if(b>a){
	        int temp=a;
	        a=b;
	        b=temp;
	    }

	    if((c-a)>(b-c)){
	        cout<<(c-b)<<endl;
	    }
	    else{
	        cout<<(a-c)<<endl;
	    }
	    
	}
	return 0;
}
