#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t; while(t--){
 long long n,k; cin>>n>>k; 
 long long p; 
 long long c=0; 
 int ar[n];
 for(int i=0;i<n;i++){
       cin>>ar[i];
 }
  sort(ar,ar+n);
  for(int j=0;j<n;j++){
      if(k%ar[j]==0){
          c=ar[j];
        }
    }     
        if(c==0){
            cout<<"-1"<<endl;
        }     
        else{
            cout<<c<<endl;
        }
	}
	return 0;
}
