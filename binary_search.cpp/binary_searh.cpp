/*#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int s=0, e=size-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return -1;
}

int main(){
    int even[6]={1,3,5,6,9,21};
    int odd[5] = {23,34,56,78,100};
    int indx = binarysearch(even,6,9);
    cout<<"index of 9 is : "<<indx<<endl;    //4
    int index=binarysearch(odd,5,34);
    cout<<"index of 100 is : "<<index<<endl;  //1
    return 0;
}*/
/*
#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int s=0, e=size-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        if(key<arr[mid] && s<=e){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return -1;
}
int main() 
{
    int kundan[6]={9,8,7,6,5,3};
    int saurav[5]={11,10,9,8,7};
    int indx=binarysearch(kundan,6,5);
    cout<<"indx of 5 is "<<indx<<endl;
    int index=binarysearch(saurav,5,11);    //4
    cout<<"indx of 11 is : "<<index<<endl;    //0

    
     
     
return 0;
}*/



// #include<iostream>
// using namespace std;

// int binarysearch(int arr[],int n,int key){
//     int s=0,e=n-1;
//     int mid=(s+e);
//     while(s<=e){
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]<key && s<=e){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//         mid=(s+e)/2;
        
//     }
//     return -1;

// }
// int main() 
// {
//     int arr[9]={1,2,3,4,5,6,7,8,9};
//     int array[8]={14,15,16,17,18,19,20,21};
//     // int key;
//     // cout<<"ENTER HE KEY"<<endl;
//     // cin>>key;
//     cout<<binarysearch(arr,9,7)<<endl;    //6
//     cout<<binarysearch(array,8,17)<<endl;   //3
     
     
// return 0;
// }