#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int majorityElement(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    return nums[nums.size()/2];
}
int main() {
	int n;
	cin>>n;
    vector<int> nums(n);
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
	}
    cout<<majorityElement(nums)<<endl;
    return 0;
}