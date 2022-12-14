#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if (a==b) cout<<"0\n";
        else if (abs(a-b)%c==0) cout<<abs((a-b)/c)<<endl;
        else cout<<abs((a-b)/c) + 1<<endl;
    }
	// your code goes here
	return 0;
}
