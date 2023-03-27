#include<iostream>
#include<vector>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<' ';
    }

}
void sortone(int arr[],int size){
    int i=0, j=size-1;
    while(i<=j){
        while(arr[i]==0 && i<=j){
            i++;
        }
        while(arr[j]==1 && i<=j){
            j--;
        }
        while(arr[i]==1 && arr[j]==0 && i<=j){
            swap(arr[i],arr[j]);
        }
    }
    i++;
    j--;
}
int main()
{
    int arr[8]={1,1,0,1,0,1,0,1};
        printarray(arr,8);
        cout<<endl;
    sortone(arr,8);
    printarray(arr,8);
}