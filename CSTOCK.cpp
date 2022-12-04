#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t!=0){
        t--;
        float s,a,b,c;
        cin>>s>>a>>b>>c;
        float q;
        q=(s*c)/100;
        s=s+q;
        if (a<=s && s<=b) cout<<"Yes\n";
        else cout<<"No\n";
        //cout<<s<<endl;;
    }
	// your code goes here
	return 0;
}
