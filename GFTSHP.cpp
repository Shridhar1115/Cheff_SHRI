#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k,count;
	cin>>t;
	while(t--){
	    count=0;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int i=0;i<n;i++){
	        if(k>=a[i]){
	            k=k-a[i];
	            count++;
	        }
	        else{
	            if(k>=(a[i]+1)/2){
	                count++;
	                break;
	            }
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}
