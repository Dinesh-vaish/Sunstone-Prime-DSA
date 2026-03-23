#include<iostream>
using namespace std;

int main(){
    int target; cin>> target;
    int arr[]={1,2,3,4,5,6,7,8,9,11,22,44,66};
    int r=sizeof(arr)/sizeof(arr[0])-1;
    int mid,l=0;
    bool found=false;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(arr[mid]==target)
        {
            cout<<"number is found";
            found=true;
            break;
        }
        else if(arr[mid]<target)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    if(!found)
    {
        cout<<" number is not exit";
    }
}