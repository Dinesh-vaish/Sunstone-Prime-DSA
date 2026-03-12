#include<iostream>
using namespace std;
int rav(int n)
{
    int rav=0;
    while(n!=0)
    {
        int k=n%10;
        rav=rav*10+k;
        n=n/10;
       
    }
     return rav;
}
int main()
{
    int n;
    cin>>n;
    int bn=0;
    while(n>0)
    {
        int k=n%2;
        bn=bn*10+k;
        n=n/2;
    }
    cout<<rav(bn)<<endl;
    return 0;
}