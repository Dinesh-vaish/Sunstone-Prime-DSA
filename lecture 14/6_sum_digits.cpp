#include<iostream>
using namespace std;
int main()
{
    int ans, var=0,n;
    cin>>n;
    while(n)
    {
        ans=n%10;
        var=(var)+ans;
        n=n/10;
        
    }
    cout<<var;
}