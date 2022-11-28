#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,a,b,c,d,sum=0,total;
        cin>>n>>a>>b;
        while(n!=1)
        {
            n/=2;
            sum++;
        }
        c=sum * a;
        d=(sum-1)*b;
        total=c+d;
        cout<<total<<endl;
    }
    return 0;
}