#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>ans;
    int arr1[3]={3,4,5};
    int arr2[4]={1,2,6,7};
    int n= sizeof(arr1) / sizeof(arr1[0]);
    for(int i=0;i<n;i++){
        ans.push_back(arr1[i]);
    }
    for(int i=0;i<4;i++){
        ans.push_back(arr2[i]);
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;

    

}