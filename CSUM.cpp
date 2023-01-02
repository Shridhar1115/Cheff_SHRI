#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,f=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            if(a[i]+a[j]==k){
	                f=1;
	                break;
	            }
	        }
	        if(f>0){
	            break;
	        }
	    }
	    if(f>0){
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	// your code goes here
	return 0;
}
