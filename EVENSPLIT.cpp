#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        if (n==2)
            cout<<s<<endl;
        else {
            sort(s.begin(),s.end());
            cout<<s<<endl;
        }
    }
	// your code goes here
	return 0;
}
