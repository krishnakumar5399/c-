// #include<iostream>
// using namespace std;
// int main() 
// {
//     int array[]={2,3,4,34,8};
//     int key=34;

//     int ans= -1;
    
//     for(int i=0; i<5;i++){
//         if(array[i]==key){
//             ans=i;
//         }
//     }
//     cout<<ans;         //3
     
     
// return 0;
// }

//linear search in cpp.

#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size,int key){
    for(int i=0;i<=size;i++){
        if(arr[i] ==key){
            return 1;
            break;
        }
    }
    return 0;
}


int main(){
    int array[8]={1,3,4,5,7,-5,-3,5};
    int key;
    cout<<"enter the key :  ";
    cin>>key;
    bool found = linearSearch(array,8,key);
    if(found){
        cout<<"Yes key is present in array";
    }else{
        cout<<"key is not present in array;";
    }

    return 0;
}