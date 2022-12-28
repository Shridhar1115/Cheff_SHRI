#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    double gs,hra,da,s;
	    cin>>s;
	    if(s<1500){
	        hra=(0.1)*s;
	        da=(0.9)*s;
	        gs=s+da+hra;
	        cout<<fixed<<setprecision(2)<<gs<<endl;
	    }
	    else{
	        hra=500;
	        da=(0.98)*s;
	        gs=s+da+hra;
	        cout<<fixed<<setprecision(2)<<gs<<endl;
	    }
	}
	return 0;
}
