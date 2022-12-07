#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int m1,m2;
	    if(a>=b) m1=a;
	    else m1=b;
	    if (c>=d) m2=c;
	    else m2=d;
	    cout<< m1+m2 <<endl;
	}
	return 0;
}
