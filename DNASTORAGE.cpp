#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    char a[n];
	    for(int j=0;j<n;j++){
	        cin>>a[j];
	    }
	    for(int j=0;j<n;j=j+2){
	        if(a[j]=='0' && a[j+1]=='0') cout<<"A";
	        else if(a[j]=='0' && a[j+1]=='1') cout<<"T";
	        else if(a[j]=='1' && a[j+1]=='0') cout<<"C";
	        else if(a[j]=='1' && a[j+1]=='1') cout<<"G";
	    }
	    cout<<endl;
	}
	return 0;
}
