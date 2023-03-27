
// worst case:
/*
#include<iostream>
using namespace std;
int main() 
{
    int arr[6]={9,2,14,25,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){

        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
     
     
return 0;
}*/


// best case: 

/*#include<iostream>
using namespace std;
int main() 
{
    int arr[6]={9,2,14,25,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        bool swaped = false;

        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped==true;
            }
        }
        if(swaped==true)
        break;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
     
     
return 0;
}*/

#include<iostream>
using namespace std;
int main()
{
    int arr[5]={45,34,67,89,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int  i=1;i<n;i++){
        bool swaped =false;


        for(int j=0;j<n-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped=true;
            }
        }
        if(swaped==false)
        break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";        //  23 34 45 67 89
    }
    return 0;
}