#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int t=0;t<n;t++){
	    int a,b,c;
	    cin >> a >> b >> c;
	    if(a+b+c>=2){
	        cout<<"Not now\n";
	    }
	    else{
	        cout<<"Water filling time\n";
	    }
	}
	return 0;
}
