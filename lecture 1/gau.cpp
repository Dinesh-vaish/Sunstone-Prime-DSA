#include <iostream>
#include<vector>
using namespace std;

int main() {
    int r,c;
    cin>>r>>c;
    vector<vector<int>> arr(r,vector<int>(c));
    int left=0,right=c-1,top=0,bottom=r-1;
    while(left<=right and top<=bottom){
        //left to right
        for(int i=left;i<=right;i++){         //left to right  top costant 
            //top
            cin>>arr[top][i];
        }
        top++;
        //top to bottom
        for(int i=top;i<=bottom;i++){
            //right
            cin>>arr[i][right];
        }
        right--;
        if(top<=bottom){         //no use but safe state 
            //right to left
            for(int i=right;i>=left;i--){
                cin>>arr[bottom][i];
            }
            bottom--;
        }
        if(left<=right){    //no use   but safe state 
            //bottom to top
            for(int i=bottom;i>=top;i--){
                cin>>arr[i][left];
            }
        }
        left++;
    }


    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
    }

    return 0;
}