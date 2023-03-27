

#include<iostream>
using namespace std;



int main()
{
    int arr[6]={11,25,9,27,1,21};
    int n= sizeof(arr) / sizeof(arr[2]);
    for(int i=0;i<n-1;i++){
        int minindx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[minindx])
            minindx=j;
        }
        swap(arr[minindx],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


