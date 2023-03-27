// array input 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int size;
//     cout<<"enter the size : "<<endl;
//     cin>>size;
//     int arr[size];
//     for(int i=0; i<size;i++){
//         cin>>arr[i];

//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<' ';
//     }
//     return 0;
// }


//sum of all elsement in present in array.cpp

/*#include<iostream>
using namespace std;
int targetsum(int arr[], int size){
    int sum=0;
    for(int i=0;i<
    size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int array[] = {1,2,3,4,5,6,7,8,9};
    cout<<targetsum(array,9);            //45
    return 0;

}*/

// check the array is shorted order or not


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main() 
// {
//     int arr[5];
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     bool shortedflag=true;
//     for(int i=1;i<5;i++){
//         if(arr[i] <= arr[i-1]){
//             shortedflag=false;
//         }
//     }
//     cout<<shortedflag;
     
     
// return 0;
// }

//arrange the given array in shorted array;


/*#include<iostream>
      #include<vector>

using namespace std;
int main() 
{
    vector<int>v(5);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    //v.pop_back();           // this function is work as remove element from last;
    
    //v.push_back(9);         // this function is work as add element from last index;

    //v.insert(v.begin()+2,9); // this function is used for add element from various index   ex +2 per 9 jora hai;

    //v.erase(v.begin()-4);
    //v.clear();         // this is used for delete all element in array i.e v. clear = empty array

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }
    v.push_back(8);
    
    
     
     
return 0;
}*/

// count the nuber whose grater than key;
/*
#include<iostream>
#include<vector>
using namespace std;
int main() 
{
    vector<int>v(9);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int key;
    cout<<"enter the key : ";
    cin>>key;
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i] >=key){
            count++;
            
        }
    }
    cout<<count;
     
return 0;
}*/

// diffrence between odd and even idex elements

/*#include<iostream>
#include<vector>
using namespace std;
int main() 
{
    vector<int>v(9);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
         
    }
    int even=0;
    int odd =0;
    for(int i=0;i<v.size();i++){
        if(v[i]%2==0){
            even+=v[i];
        }
        else{
            odd+=v[i];
        }
    }
    cout<<even<<' '<<odd<<endl;
     
     
return 0;
}*/


// find duplicates in arrray

/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() 
{
    vector<int>v(9);
    vector<int>ans;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int count =0;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i+1]){
            count++;

        }
        if(count==2){
            ans.push_back(v[i]);
            count=0;
        }
        else{
            count =1;
        }
        
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<' ';
    }
     
     
  return 0;
}*/


// 2nd

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() 
// {
//     vector<int>v(9);
//     for(int i=0;i<v.size();i++){
//         cin>>v[i];
//     }
//     int ans=0;
//     for(int i=0;i<v.size();i++){
//         ans=ans^v[i];
//     }
//     for(int i=0;i<v.size();i++){
//         ans=ans^i;
//     }
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<' ';
//     }
    
     
     
// return 0;
// }


// find  max element  in array 
/*#include<iostream>
#include<vector>
using namespace std;
int main() 
{
    vector<int>v(5);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int max=INT16_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>max){
            max =v[i];
        }
    }
    cout<<"max is max : "<<max;

     
     
return 0;
}*/


// find second largest element in array;

/*

#include<iostream>
#include<vector>
using namespace std;
int main() 
{
    vector<int>v(5);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int largestindx = -1;
    int max=INT16_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>max){
            max =v[i];
            largestindx=i;
        }
    }
    cout<<"max is max : "<<max<<endl;
    v[largestindx]=-1;
    int secondmax =INT16_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>secondmax){
            secondmax=v[i];
        }
    }
    cout<<"second max is : "<<secondmax;

     
     
return 0;
}
*/


// lineaar search;


/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[7]={1,3,4,7,9,4,0};
    int n= sizeof(arr)/sizeof(arr[3]);
    int key;
    cout<<"enter the key : ";
    cin>>key;
    int flag=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            flag=i;

        }
    }
    cout<<flag<<endl;
    return 0;
}*/

// binary search ;

/*#include<iostream>
using namespace std;
int main()
{
    int key ;
    cout<<"ENTER THE KEY : ";
    cin>>key;
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[1]);
    int s=0,e=n-1,mid;
    mid=(s+e)/2;
    int indx=-1;
    while(s<=e){
        if(arr[mid]==key){
            //cout<<mid<<endl;
            indx=mid;
            break;

        }
        else if(arr[mid]<key && s<=e){
            s=mid+1;

        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    cout<<indx;
    return 0;

}*/


//#SHORTING

// slection sort;


/*#include<iostream>
using namespace std;
int main(){
    int arr[8]={21,25,2,2,12,2,101,23};
    int n=8;
    for(int i=0;i<n-1;i++){
        int minindx=i;
        for(int j=i+1;j<n;j++){
            if(arr[minindx]>arr[j]){
                minindx=j;
            }
        }
        swap(arr[minindx],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/

// BUBBLE SORT;

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[7]={12,23,1,6,9,14,47};
//     int n=sizeof(arr)/sizeof(arr[3]);
//     for(int i=1;i<n;i++){
//         bool swaped=false;
//         for(int j=0;j<n-i;j++){
//             if(arr[j]==arr[j+1]){
//                 continue;
//             }
//              else if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swaped=true;
//             }
//         }
//         if(swaped==false){
//             break;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// BINARY SEARCH 


/*class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                for(int k=j+1;k<arr.size();k++){
                    int diff1=abs(arr[i]-arr[j]);
                    int diff2=abs(arr[j]-arr[k]);
                    int diff3=abs(arr[i]-arr[k]);
                    if(diff1<=a && diff2<=b && diff3<=c){
                        count++;
                    }
                }
            }
        }
        return count;
        
    }
};*/


 /*for(int i=1;i<n;i++){
        bool swaped=false;
        for(int j=0;j<n-i;j++){
            if(arr[j]==arr[j+1]){
                continue;
            }
             else if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped=true;
            }
        }
        if(swaped==false){
            break;
        }
    }*/

    #include<iostream>
    using namespace std;
    bool isreverse(int num){
        int n1=0;
        while(num!=0){
            int r=num%10;
            n1= n1*10+r;
            num/=10;
        }
        int n2=n1;
        int n3=0;
        while(n2!=0){
            int r1=n2%10;
            n3=n3*10+r1;
            n3/=10;

        }
        if(num==n3){
            return true;
        }else{
            return false;
        }
    }



    int main() 
    {
        int n;
        cout<<"ENTER THE NUMBER : ";
        cin>>n;
        // bool dReverse=isreverse(n);
        // if(dReverse){
        //     cout<<"TRUE";
        // }else{
        //     cout<<"FALSE ";
        // }
        if(isreverse(n)==true){
            cout<<"hhh";
        }
        else{
            cout<<"nnn";
        }

         
         
    return 0;
    }
  
