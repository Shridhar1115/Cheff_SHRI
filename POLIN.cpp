#include <iostream>
using namespace std;
#include <set>
int main() {
    int t;
    cin>>t;
    while(t--){
        int num,a,b;
        cin>>num;
        set<int> s1;
        set<int> s2;
        for(int i=0;i<num;i++){
            cin>>a>>b;
            s1.insert(a);
            s2.insert(b);
        }
        cout<<s1.size() + s2.size()<<endl;
     }
	// your code goes here
	return 0;
}
