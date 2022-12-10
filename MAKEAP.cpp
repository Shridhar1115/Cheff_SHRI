#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b;
        c=(a+b)%2;
        if (c==0) cout<<((a+b)/2)<<endl;
        else cout<<-1<<endl;
    }
	// your code goes here
	return 0;
}
