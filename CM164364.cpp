#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b;
        unordered_map<int, int> mp;
        for (int i=0;i<a;i++){
            cin>>c;
            ++mp[c];
        }
        int s=mp.size();
        cout<<min(s,a-b)<<endl;
    }
	// your code goes here
	return 0;
}
