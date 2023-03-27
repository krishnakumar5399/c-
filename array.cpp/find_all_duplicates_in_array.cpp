#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>ans;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int count =0;

    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i]==v[i+1]){
        count ++;
         if (count==2)
        {
              ans.push_back(v[i]);
              count =1;
        }
        else {
            count =1;
        }
        

            
        }
    }
 
    for(int i=0;i<ans.size();i++){

        cout<<ans[i]<<" ";
    }
     
return 0;
}