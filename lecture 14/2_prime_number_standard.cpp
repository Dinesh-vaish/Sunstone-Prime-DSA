#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool prime=true;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            prime=false;
             break;
        }
       

    }
    if(!prime)
    cout<<" number is not prime";
   else
    cout<<" Number is  prime";
}
