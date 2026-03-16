#include<bits/stdc++.h>
using namespace std;
int main () {
	int n; cin>>n;
	int arr[n][n];
	vector<int> ans(n);
    for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int l=0;l<n;l++)
	{
		
		for(int i=0;i<n;i++)
		{
			int sum=0;
			for(int j=0;j<n;j++)
			{
			  sum +=arr[j][i];
			}
			ans[i]=sum;
		}
		
	}
	sort(ans.begin(),ans.end());
    cout<<ans[n-1];
	return 0;
}