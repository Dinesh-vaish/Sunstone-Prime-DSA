#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int target; cin>>target;
    vector<int> nums={1,2,3,4,5,6,7,8,55,76,24,525,214,563,91};
    int n=nums.size();
    bool found=false;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==target)
        {
            cout<<"found";
            found=true;
            break;
        }

    }
    if(!found)
    {
        cout<<" not found";
    }
}