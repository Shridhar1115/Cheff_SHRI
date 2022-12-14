#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  int n,x;
	  cin>>n>>x;
	  float total=pow(2,x);
	  for(int i=1;i<=n;i++){
	      total=total-(total/2);
	  }
	  cout<<total<<endl;
	}
	return 0;
}