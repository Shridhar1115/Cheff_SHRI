#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int u,a,v,s;
    cin>>u>>v>>a>>s;
    int k= sqrt((u*u) - 2*a*s);
    if(k<=v){
        cout<<"YES\n";
    }
    else if(k>v){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
   
    }
	// your code goes here
	return 0;
}