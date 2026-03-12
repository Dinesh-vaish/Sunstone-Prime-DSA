#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long a = 0, b = 1, next;

    for(int i = 1; i <= n; i++)
    {
        for(int j=1;j<=i;j++)
        {
         cout << a << " ";
        next = a + b;
        a = b;
        b = next;
       
        }
        cout<<endl;
    }
    

    return 0;
}
