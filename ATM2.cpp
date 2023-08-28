#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        int val=m;
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        
        for (int i=0;i<n;i++){
            if (a[i]<=val) {
                cout<<"1";
                val=val-a[i];
            }
            else cout<<"0";
         }
         cout<<endl;
    }
	// your code goes here
	return 0;
}
