#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,count=0;
	cin>>n;
	if(n<=9){
	       cout<<1<<endl;
	   }
	   else if(n>=10 && n<=99){
	       cout<<2<<endl;
	   }
	   else if(n>=100 && n<=999){
	       cout<<3<<endl;
	   }
	   else{
	       cout<<"More than 3 digits\n";
	   }
	return 0;
}
