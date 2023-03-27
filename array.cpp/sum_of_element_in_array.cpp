// #include<iostream>
// using namespace std;
// int main() 
// {
//     int array[] ={1,3,5,7,9};    //25
//     int size =sizeof(array) /sizeof(array[0]);
//     int sum=0;
//     for(int indx =0; indx<size; indx++){
//         sum+=array[indx];

//     }
     
//      cout<<sum;
// return 0;
// }

//write a program to sum all element in array  2nd method


#include<iostream>
using namespace std;







void arraySum(int arr[],int size){
    int sum =0;
    for(int i=0; i<size; i++){
        sum = sum +arr[i];
    

    }
    cout<<sum<<endl;
    
}
int main()
{
    int sujita[5]={1,2,3,4,5};
    int arr[9] ={1,2,3,4,5,6,7,8,9};
    arraySum(arr,9);
    arraySum(sujita,5);

    return 0;


}
   
   
