#include <iostream>
using namespace std;

int main() {
	// your code goes here
	    int a,b,area,peri;
	    cin>>a;
	    cin>>b;
	    area=a*b;
	    int c=a+b;
	    peri=2*c;
	    if(area>peri){
	        cout<<"Area"<<endl<<area;
	    }
	    else if(peri>area){
	        cout<<"Peri"<<endl<<peri;
	    }
	    else cout<<"Eq"<<endl<<area;
	
	return 0;
}
