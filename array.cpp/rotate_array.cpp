#include<iostream>
#include<vector>
using namespace std;
void rotateArray(int arr[],int n,int k){   // void type function is nothing return  only call;
    vector<int>temp(n);
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }
    for(int i=0;i<n;i++){   // for the copy of element in temp to arr;
        arr[i]=temp[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";     // 5 6 7 1 2 3 4
    }
    

}

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    rotateArray(arr,7,3);

}