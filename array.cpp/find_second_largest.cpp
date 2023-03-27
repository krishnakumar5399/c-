// #include<iostream>
// using namespace std;
// int largestele(int arr[],int size){
//     int largestindx = -1;
//     int max = INT16_MIN ;
//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max = arr[i];
//             largestindx = i;
//         }

//     }
//     return largestindx;
// }




// int main()
// {
//     int array[]= {2,3,5,7,6,1};
//     int n=6;
//     int flargestindx = largestele(array,n);
//     cout<<array[flargestindx]<<endl;
//     array[flargestindx]=-1;
//     int seclarge = largestele(array,n);
//     cout<<array[seclarge]<<endl;
//     return 0;

// }



// ffind second largest element while largest element is twice or more  then find out second largest element;


#include<iostream>
using namespace std;
int largeEle(int arr[],int size){
    int max= INT16_MIN;
    int large_indx =-1;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
            large_indx = i;
        }
    }
    return large_indx;
}
int main(){
    int array[] ={2,3,5,7,6,7,1};
    int first_large = largeEle(array,7);
    int largestelement = array[first_large];
    for(int i=0;i<7;i++){
        if(array[i]==largestelement){
             array[i]=-1;
        }
    }
    int sceondele= largeEle(array,7);
    cout<<"second largest element is : "<<array[sceondele]<<endl;           //6
}