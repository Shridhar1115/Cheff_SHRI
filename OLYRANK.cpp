#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int a1,b1,c1,a2,b2,c2;
	    cin>>a1>>b1>>c1>>a2>>b2>>c2;
	    if((a1+b1+c1)>(a2+b2+c2)) cout<<1<<endl;
	    else cout<<2<<endl;
	}
	return 0;
}
