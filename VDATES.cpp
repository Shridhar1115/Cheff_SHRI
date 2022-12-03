#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>=b && a<=c){
	        cout<<"Take second dose now"<<endl;
	    }
	    else if(a<b){
	        cout<<"Too Early"<<endl;
	    }
	    else if(a>c){
	        cout<<"Too Late"<<endl;
	    }
	}
	return 0;
}
