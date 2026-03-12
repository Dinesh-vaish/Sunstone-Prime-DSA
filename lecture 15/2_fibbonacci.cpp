#include<iostream>
using namespace std;
int fibbo(int g){
    if (g==0 or g==1)
    {
        return g;
    }
    else
    return fibbo(g-1)+fibbo(g-2);
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n-1;i++)

       {
         cout<<fibbo(i)<<" ";
       }
    return 0;
}