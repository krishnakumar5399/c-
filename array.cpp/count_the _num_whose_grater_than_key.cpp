
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(9);
    for(int i=0;i<v.size();i++){
        cin>>v[i];        //1 2 3 4 5 6 7 8 9
    }
    int count =  0 ;
    cout<<"enter the key : ";
    int key;     //5
    cin>>key;
    for(int i=0;i<v.size();i++){
        if(v[i]>key){
            count++;
        }
    }
    cout<<"number of element whose grater than key is : "<<count<<endl;   //  4
    return 0;
    
}