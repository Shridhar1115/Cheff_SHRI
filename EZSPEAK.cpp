#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int count=0;
	    bool is=true;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
	        {
	            count++;
	        }
	        else{
	            count=0;
	        }
	        if(count>=4)
	        {
	            is=false;
	            break;
	        }
	    }
	    
	    if(is)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}