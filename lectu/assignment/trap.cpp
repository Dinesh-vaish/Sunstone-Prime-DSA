#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int Ntest;
	cin>>Ntest;
	while(Ntest!=0){
		Ntest=Ntest-1;
		int n;
		cin>>n;
		vector<int> height(n);
		for(int i=0;i<n;i++)
		{
			cin>>height[i];
		}
    int left = 0 , right = n-1;
    int answer = 0;
    int rightmax = 0 , leftmax = 0;
    while(left<right){
        if(height[left]<=height[right]){
            if(leftmax>=height[left]){
                answer+=leftmax-height[left];
            }
            else{
                leftmax=height[left];
            }
            left++;
        }
        else{
            if(rightmax>=height[right]){
                answer+=rightmax-height[right];
            }
            else{
                rightmax=height[right];
            }
            right--;
        }
    }
	cout<<answer<<endl;

	}
	return 0;
}