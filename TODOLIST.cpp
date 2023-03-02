#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
            int n;
            cin>>n;
            int a[n],count=0;
            for (int i=0;i<n;i++){
                cin>>a[i];
                if (a[i]>=1000)
                count++;
    }
        cout<<count<<endl;
    }
	// your code goes here
	return 0;
}
