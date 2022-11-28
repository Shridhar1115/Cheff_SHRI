#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int a,b;
	    cin>>a>>b;
	    if((a*2)>(b*5)){
	        cout<<"Chocolate"<<endl;
	    }
	    else if((a*2)<(b*5)){
	        cout<<"Candy"<<endl;
	    }
	    else if((a*2)==(b*5)){
	        cout<<"Either"<<endl;
	    }
	}
	return 0;
}