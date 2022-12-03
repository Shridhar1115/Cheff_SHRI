#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t!=0){
        t--;
        int n,k;
        cin>>n>>k;
        if (k!=0) cout<<n%k<<endl;
        else cout<<n<<endl;
    }
	// your code goes here
	return 0;
}
