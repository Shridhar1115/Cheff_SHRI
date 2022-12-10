#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,y,sum1=0,sum2=0;
	    cin>>x>>y;
	    sum1=(500-(x*2))+(1000-((x+y)*4));
	    sum2=(500-(y*4))+(1000-((x+y)*2));
	    if(sum1>=sum2) cout<<sum1<<endl;
	    else cout<<sum2<<endl;
	}
	return 0;
}
