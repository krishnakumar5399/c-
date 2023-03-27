// #include<iostream>
// using namespace std;

// bool available(int arr[],int n,int x){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==x){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main() 
// {
//     int arr[5]={0,5,2,9,6};
//     cout<<available(arr,5,11);   // true
     
     
// return 0;
// }

// according to question  array is shorted order;

// #include<iostream>
// using namespace std;


// bool available(int arr[],int n,int x){
//     int s=0, e=n-1;
//     while(s<=e){
//         if(arr[s]+arr[e]==x && s<=e){
//             return true;
//         }
//         else if(arr[s]+arr[e] <x){
//             s++;
//         }
//         else{
//             e--;
//         }
//     }
//     return false;
// }


// int main() 
// {
//     int arr[9]={-2,-1,0,1,2,3,4,5,6};
//     cout<<available(arr,9,16); // return true;
     
     
// return 0;
// }



#include<iostream>
using namespace std;


bool available(int arr[],int n,int x){
    int s=0, e=n-1;
    while(s<=e){
        if( abs( arr[s]-arr[e])==x && s<=e){
            return true;
        }
        else if(arr[s]-arr[e] <x){
            e--;
        }
        else{
            s++;
        }
    }
    return false;
}


int main() 
{
    int arr[9]={-2,-1,0,1,2,3,4,5,6};
    cout<<available(arr,9,11);     // false
     
     
return 0;
}

