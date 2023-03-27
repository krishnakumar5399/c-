#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int>v){
    int s=0,e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}



int main(){
    vector<int>v(7);
    cout<<"enter the ele :";
    for(int i=0;i<7;i++){
        cin>>v[i];
    }
    vector<int> ans=reverse(v);
    cout<<"reverse array is : "<<endl;
    print(ans);                  // 7 6 5 4 3 2 1
}