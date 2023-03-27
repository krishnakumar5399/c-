//terget sum

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v(9);
//     for(int i=0; i<=v.size();i++){
//         cin>>v[i];     /// 1 2 3 3  4 5 6 7 8 9
//     }
//     int count =0;
//     int key;
//     cout<<"enter the key: ";
//     cin>>key;                             // 9
//     for(int i=0; i<=v.size();i++){
//         for(int j=i+1;j<=v.size();j++){
//             if(v[i]+ v[j]==key){
//                 count++;
//             }
//         }
//     }
//     cout<<"number of pair is : "<<count<<endl;    // 4
//     return 0;


// }


//find the number of triple whose sum is equal to given value of x;

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(6);
    for(int i=0; i<v.size();i++){
        cin>>v[i];
    }
    int targetsum;
    cout<<"enter target sum : ";
    cin>>targetsum;
    int count = 0;
    for(int i=0;i<=v.size();i++){
        for(int j= i+1;j<v.size();j++){
            for(int k = j+1;k<v.size();k++){
                if(v[i]+v[j]+v[k]==targetsum){
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}