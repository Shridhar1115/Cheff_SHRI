#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=0,b=0,c=0;
        for (int i=0;s[i]!='\0';i++){
            if (s[i]=='P')
            a++;
            else if (s[i]=='C')
            b++;
            else c++;
        }
        if (a==1 && b==1 && c==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
	// your code goes here
	return 0;
}
