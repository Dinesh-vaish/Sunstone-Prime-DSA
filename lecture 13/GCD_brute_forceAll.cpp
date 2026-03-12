#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a,int b)
{
    while(b!=0)
    {
        int temp=a%b;
        a=b;
        b=temp;
        cout<<endl<<a;
    }
}
int main()
{
    // int c=INT_MAX;   //Positive Infinity
    // int d=INT_MIN;  //Negative Infinity
    int a,b;
    cin>>a>>b;
    while(b!=0)
    {
        int temp=a%b;
        a=b;
        b=temp;
    }
    cout<<endl<<a;
        gcd(a,b);

        cout<<endl<<__gcd(a,b);
        return 0;
}