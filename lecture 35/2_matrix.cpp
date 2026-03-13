#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int m,n;cin>>m>>n;
    vector<vector<int>> a(n,vector<int>(m));
    vector<vector<int>> b(n,vector<int>(m));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++) cin>>a[i][j];
    }

     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++) cin>>b[i][j];
    }

    vector<vector<int>> c(n,vector<int>(m);
}