/*#include<iostream>
using namespace std;
int main() 
{
    int array[] ={1,3,5,7,9};    //25
    int size =sizeof(array) /sizeof(array[0]);
    int sum=0;
    for(int indx =0; indx<size; indx++){
        sum+=array[indx];

    }
     
     cout<<sum;
return 0;
}*/



//FIND THE MAXIMUM  VALUE  OUT OF THE ELEMENTS IN THE ARRAY;
/*
#include<iostream>
using namespace std;
int main() 
{
    int array[] ={2,3,5,34,8};
    int size= sizeof(array)/sizeof(array[0]);
    int max= array[0];
    for(int indx =1;indx<size;indx++){
        if(array[indx]>max){
            max= array[indx];
        }
    }
    cout<<max;      ///34
     
     
return 0;
}*/


//linear search in array
/*
#include<iostream>
using namespace std;
int main() 
{
    int array[]={2,3,4,34,8};
    int key=34;

    int ans= -1;
    
    for(int i=0; i<5;i++){
        if(array[i]==key){
            ans=i;
        }
    }
    cout<<ans;         //3
     
     
return 0;
}*/

// #include<iostream>
// using namespace std;
// int main() 
// {
//     int array[] ={1,2,3,4,8,9,2,5};
//     int key= 2;
//     for (int i=7; i>0; i--){
//         if(array[i]==key){
            
//             cout<<i<<' ';    //6
//             break;

//         }
//     }
     
     
// return 0;
// }



/*

// #include<iostream>
// using namespace std;
// int binarysearch(int arr[],int size,int key){
//     int start=0;
//     int end=size-1;
//     int mid = (start+end)/2;

//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }

//         else if(arr[mid]<key){
//             start=mid+1;
//         }

//         else{
//             end = mid-1;
//         }

//         mid = (start+end)/2;


//     }
//     return -1; 


// }


// int main() 
// {
//     int size;
//     cout<<"enter the size"<<endl;
//     int arr[size];
//     cout<<"enter array elements"<<endl;
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     int key;
//     cout<<"enter the number"<<endl;
//     cin>>key;

//     cout<<binarysearch(arr,size,key); 
     
// return 0;
// }*/


//array input from user;


// #include<iostream>
// using namespace std;
// int main() 
// {
//     int n;            //5
//     cin>>n;
//     int arr[n];
//     for (int i=0;i<n; i++){
//         cin>>arr[i];            //1 2 3 4 5

//     }
//     for(int k=0;k<n; k++){
//         cout<<arr[k]<<' ';     //1 2 3 4 5
//     }
     
     
// return 0;
// }



//write a program to sum of the all element  present  given array;

/*#include<iostream>
using namespace std;
int main() 
{
    int array[]= {2,4,6,8,9};
    int sum =0;
    for (int indx=0; indx<5;indx++){
        sum+=array[indx];
    }

     cout<<sum;
     
return 0;
}*/




//write a program to print grater element present in array;

/*#include<iostream>
using namespace std;
int main() 
{
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<' ';
    // }
     int arr[] = {1,2,4,34,5,7};
     int size =sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }cout<<max;     //34
     
     
return 0;
}*/


// #include<iostream>
// using namespace std;
// int main() 
// {
     
     
// return 0;
// }


//how to input array in cppp;

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int array[n];
//     for(int i=1 ; i<=n; i++){
//         cin>>array[i];
//     }
//     cout<<"array is :  ";
//     for(int i=1; i<=n; i++){
//         cout<<array[i]<<' ';

//     }
//     return 0;
// }




// #include<iostream>
// using namespace std;
// void array(int arr[],int size){
//     cout<<"print array: "<<endl;
//     for(int i=0;i<=size;i++){
//         cout<<arr[i]<<' '<<endl;
//     }
//     cout<<"printing is done";
// }
// int main()
// {
//     // int ma[9] ={2,3,4};
//     // //cout<<"array is "<<ma[8]<< ' ';
//     // for(int i=0;i<9;i++){
//     //     cout<<ma[i]<<' ';
//     // }

//     int one[5]={1,3};
//     int two[6] ={6,3};

//     int three[9] = {1,3,45};
//     array(one,9);
//     array(two, 8);
//     array(three, 5);
//     return 0;

// }



//check the maximum and minimum value of an array;

// #include<iostream>
// using namespace std;
// int get_max (int arr[],int size){
//     int max = INT32_MIN;
//     for(int i=0; i<size;i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }//function get max;
//     return max;

// }
// int get_min (int arr[],int size){
//     int min = INT32_MAX;
//     for(int i=0; i<size;i++){
//         if(arr[i]<min){
//             min = arr[i];
//         }
//     }//function get max;
//     return min;

// }
// int main()
// {
//     int size;
//     cin>>size;
//     int arr[100] ;
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     cout<<"the maximum value is:  "<<get_max(arr,size)<<endl;
//     cout<<"the minimum value is : "<<get_min(arr,size)<<endl;
//     return 0;
// }


//lenear serch 

// #include<iostream>
// using namespace std;

// bool search(int arr[],int size,int key){
//     for(int i = 0; i<size;i++){
//         //to check the element
//         if(arr[i]==key){
//             return 1;
//         }
//         //cout<<endl;
//     }
//     return 0;
// }



// int main()
// {
//     int arr[9] = {1,3,4,-8,9,5,21,9,10};
//     cout<<"enter the key whose to find element :  "<<endl;
//     int key;
//     cin>>key;
    
//     bool found =search(arr,9,key);
//     if (found){
//         cout<<"key is present\n";
//     }
//     else{
//         cout<<"key is not present ";
//     }
//     return 0;
    
// }

//second method

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[7] ={1,3,6,45,-3,8,-10};
//     int key;
//     cout<<" enter the key:  ";
//     cin>>key;
//     int ans =-1;
//     for (int i=0;i<7;i++){
//         if(arr[i]==key){
//             ans=i;
//         }
       
//     }
//     //cout<<ans;
//     if(ans== -1){
//         cout<<"key is not present"<<endl;
//     }
//     else{
//         cout<<"key is present :  "<<ans<<endl;
//     }
//     return 0;
// }


// xor operator  
//a^a =0;  a^0 =a'



//find unique element in the array;

// #include<iostream>
// using namespace std;
// int findUnique(int arr[],int size){
//     int ans =0;
//     for (int i=0;i<size;i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// }
// int main()
// {
//     //int arr[5] = {1,2,3,2,3};
//     int array[]={1,2,4,6,1,2,4};
//     cout<<findUnique(array,7);
//     return 0;
// }




// find unique element;



// #include<iostream>
// using namespace std;
// int main() 
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<' ';
//     }
     
     
// return 0;
// }


//find element in cpp;

// #include<iostream>
// using namespace std;

// bool findelement(int arr[],int key, int size){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return 1;
//         }
    
//     }
//     return 0;
// }
// int main()
// {
//     int  key;
//     cout<<"enter the key"<<endl;
//     cin>>key;
//     int array[9] = {1,2,4,5,-5,3,6,8,9};
//     bool isfound = findelement(array,key,9);
//     if(isfound){
//         cout<<"key is present"<<endl;

//     }
//     else{
//         cout<<"key is not present"<<endl;
//     }
//     return 0;
// }



#include<iostream>
using namespace std;
bool search(int arr[],int size, int key){
    for(int i=0;i<=size;i++){
        if(arr[i]==key){
            return true;
            
        }
    }
    return false;
}


int main()
{
    int key;
    cout<<"enter the key : ";
    cin>>key;
    int arra[9] = {1,22,3,4,5,6,73,1,9};
    bool found = search(arra,9,key);
    if(found==true){
        cout<<"present";
    }
    else{
        cout<<"not";
    }
 
    return 0;
}