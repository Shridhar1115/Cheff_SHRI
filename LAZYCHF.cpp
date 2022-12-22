#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,m,d;
	    cin>>x>>m>>d;
	    m=x*m;
	    d=d+x;
	    if(m<=d) cout<<m<<endl;
	    else cout<<d<<endl;
	}
	return 0;
}
