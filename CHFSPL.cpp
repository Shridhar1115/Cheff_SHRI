#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    int sum=0,sum1=0,sum2=0;
	    cin>>a>>b>>c;
	    sum=a+b;
	    sum1=a+c;
	    sum2=b+c;
	    if(sum>=(sum2)&&sum>=sum1){
	        cout<<sum<<endl;
	    }
	    else if(sum1>=sum && sum1>=sum2){
	        cout<<sum1<<endl;
	    }
	    else if(sum2>=sum && sum2>=sum1){
	        cout<<sum2<<endl;
	    }
	    
	    
	}
	return 0;
}
