#include<bits/stdc++.h>
using namespace std;


int maxpathofsum( vector<int> num1, vector<int> num2 ,int m, int n){
    int i=0,j=0,result=0;
    int sum1=0, sum2=0;
    while(i<n and j<m){
        if(num1[i]<num2[j])
        {
            sum1 += num1[i];
            i++;

        }
        else if(num1[i]>num2[j]){
            sum2 +=num2[j];
            j++;
        }
        else{
            result +=max(sum1,sum2)+ num1[i];
            sum1=sum2=0;
            i++;
            j++;
        }
    }
    while(i<n){
        sum1 += num1[i];
        i++;
    }

     while(i<n){
        sum2 += num2[j];
        j++;
    }

    result +=max(sum1,sum2);
    return result;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>n>>m;
        vector<int> num1(n), num2(m);
        for(int i=0;i<n;i++) cin>>num1[i];
        for(int j=0;j<m;j++) cin>>num2[j];
        cout<<maxpathofsum(num1,num2,m,n)<<"\n";
    }
}