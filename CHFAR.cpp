#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int arr[a];
        int c=0;
        for (int i=0;i<a;i++){
            cin>>arr[i];
            if (arr[i]!=1)
            c++;
        }
        if (b>=c) cout<<"YES\n";
        else cout<<"NO\n";
    }
	// your code goes here
	return 0;
}
