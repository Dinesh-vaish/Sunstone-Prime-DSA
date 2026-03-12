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
    int g=0;
    cin>>n;
   for(int i=1;i<=n;i++)
   {
      for(int j=1;j<=i;j++)
      {
        cout<<fibbo(g)<<" ";
        g++;
      }
        cout<<endl;
   }
 
    return 0;
}