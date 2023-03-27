#include<iostream>
#include<vector>
using namespace std;
int squre(int arr[],int n){
    vector<int>ans;
    for(int i=0;i<n;i++){
        int a=arr[i]*arr[i];
        ans.push_back(a);
    }
    for(int i=0;i<n;i++){
       cout<<ans[i]<<" ";
    }
    
    
}
int main() 
{
    int arr[5]{0,1,2,3,4};
    cout<<squre(arr,5);
     
     
return 0;
}