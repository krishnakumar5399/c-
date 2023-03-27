// #include<iostream>
// #include<vector>
// using namespace std;
// int main() 
// {
//     vector<int>v ;
//     cout<<"size"<<v.size()<<endl;
//     cout<<"capacity"<<v.capacity()<<endl;
//     v.push_back(1);
//       cout<<"size"<<v.size()<<endl;
//     cout<<"capacity"<<v.capacity()<<endl;
//     v.push_back(5);
//       cout<<"size"<<v.size()<<endl;
//     cout<<"capacity"<<v.capacity()<<endl;
     
     
// return 0;
// }


//vector input from user;

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() 
// {
//     vector<int>v;
//     for(int i=0;i<5;i++){
//         int element;
//         cin>>element;
//         v.push_back(element);
//     }
//     for(int i=0; i<v.size() ; i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     v.insert(v.begin()+2,6);   // this is ussed for add element 2nd index per 6 
//     v.push_back(9);          //last me jor deta hai koi bhi element ko;

//     v.erase(v.begin()-2);        // pahle se second elment ko hata dega;
//     //using while loop;
//     int indx=0;
//     while(indx<v.size()){
//         cout<<v[indx]<<' ';
//         indx++;
//     }
     
     
// return 0;
// }




// find the last occerence of an element x in given arrays;

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<int>v(6) ;
//     for(int i=0 ; i<=6; i++){
//         cin>>v[i];
//     }

//     cout<<"enter the x : ";
//     int x; 

//     cin>>x;
//     int occurence = -1;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==x){
//             occurence =i;
//         }

//     }
//     cout<<occurence<<endl;
//     return 0;
// }



//  ALTERNATIVE METHOD;


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v(6);
//     for (int i=0;i<=6;i++){
//         cin>>v[i];
//     }
//     cout<<"enter x: ";
//     int x;
//     cin>>x;
//     int occerence = -1;
//     for(int i=v.size()-1; i>=0;i--){
//         if(v[i]==x){
//             occerence = i;
//             break;
//         }
//     }
//     cout<<"last occerence is : "<<occerence<<endl;
//     return 0;
// }





//count the number of occerence  of a particular element x;

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<int> v(6);
//     for(int i=0;i<=v.size();i++){
//         cin>>v[i];        // 1 2 9 9 6 9 9
//     }
//     cout<<"enter x: ";
//     int x;
//     cin>>x;              //9
//     int occerence = 0;
//     for(int i=0;i<=v.size();i++){
//         if(v[i]==x){
//             occerence=occerence+1;
//         }
//     }
//     cout<<"number of occenrence is : "<<occerence<<endl;       //4
//     return 0;
// }


// last occeerence

/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(9);
    for(int i=0; i<=v.size();i++){
        cin>>v[i];
    }
    cout<<"enter x: ";
    int x;
    cin>>x;
    int occurence = -1;
    for(int i=0; i<=v.size();i++){
        if(v[i] == x){
            occurence = i;

        }
    }
    cout<<"occerence is : "<<occurence<<endl;
    return 0;
}*/


// count the number of occerence;

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v(9);
//     for (int i=0 ; i<= v.size();i++){
//         cin>>v[i];

//     }
//     cout<<"enter x :";
//     int x;
//     cin>>x;
//     int n_occerence = 0;
//     for(int i=0;i<=v.size(); i++){
//         if(v[i]==x){
//             n_occerence+=1;
//         }
//     }
//     cout<<"number of occerence is : "<<n_occerence<<endl;
//     return 0;
// }


// target sum;

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v(5);
//     for(int i=0; i<=v.size();i++){
//         cin>>v[i];
//     }
//     int count =0;
//     int key;
//     cout<<"enter the key: ";
//     cin>>key;
//     for(int i=0; i<=v.size();i++){
//         for(int j=i+1;j<=v.size();j++){
//             if(v[i]+ v[j]==key){
//                 count++;
//             }
//         }
//     }
//     cout<<"number of pair is : "<<count<<endl;
//     return 0;


// }


// count the number of element  strictly grater than value of x;


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v(9);
//     for(int i=0;i<v.size();i++){
//         cin>>v[i];
//     }
//     int count =  0 ;
//     cout<<"enter the key : ";
//     int key;
//     cin>>key;
//     for(int i=0;i<v.size();i++){
//         if(v[i]>key){
//             count++;
//         }
//     }
//     cout<<"number of element whose grater than key is : "<<count<<endl;
//     return 0;

// }

// check the array is shorted order or not:


// #include<iostream>
// using namespace std;
// int main()
// {
//     int array[9] = {1,2,3,4,5,6,7,8,9};
//     bool shortedflag = true;
//     for(int i=1; i<9;i++){
//         if(array[i] <= array[i-1]){
//             shortedflag = false;
//         }
//     }
//     cout<<shortedflag<<endl;
//     return 0;
// }

// find the diffrences between sum of even indices and sum of odd indices : 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v(9);
//     for(int i=0; i<v.size(); i++){
//         cin>>v[i];                        // 1 2 3 4 5 6 7 8 9

//     }
//     int evensum =0;   //  25
//     int oddsum =0;     //30
//     for(int i=0; i<=v.size();i++){
//         if(v[i] % 2 ==0){
//             evensum=evensum+ v[i];
//         }
//         else  {
//             oddsum= oddsum +v[i];
//         }
//     }
//     cout<<"diffrence between evensum and oddsum : "<<evensum-oddsum<<endl;     // -5
//     return 0;
// }

//find the number of triple whose sum is equal to given value of x;

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>v(6);
//     for(int i=0; i<v.size();i++){
//         cin>>v[i];
//     }
//     int targetsum;
//     cout<<"enter target sum : ";
//     cin>>targetsum;
//     int count = 0;
//     for(int i=0;i<=v.size();i++){
//         for(int j= i+1;j<v.size();j++){
//             for(int k = j+1;k<v.size();k++){
//                 if(v[i]+v[j]+v[k]==targetsum){
//                     count++;
//                 }
//             }
//         }
//     }
//     cout<<count<<endl;
//     return 0;
// }



//finding a unique number in a given array;


// #include<iostream>
// using namespace std;
// int main() {

//     int array[7]={2,3,1,3,2,4,1};
    
//     for(int i=0;i<7;i++){
//         for(int j=i+1;j<7;j++){
//             if(array[i]==array[j]){
//                 array[i]= array[j] = -1;
//             }

//         }
//     }

   
//     for(int i=0;i<7;i++){
//         if(array[i]>0){
//             cout<<"unique number is: "<<array[i];
//         }
//     }
//     return 0;
     
     
// }


//find second largest number in given array;

// #include<iostream>
// #include<vector>
// using namespace std; 
// int largestnum(int arr[],int size){
//     int max = INT16_MIN ;
//     int maxindx = -1;
//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max = arr[i];
//             maxindx = i;
//         }
        
        
//     }
   
//     return maxindx;
   
   
    

// }
// int main()
// {
//     int array[] ={2,3,5,7,6,1};
//      int firstlargestele=largestnum(array,6);
//      array[firstlargestele] = -1;
//      int secondlargest = largestnum(array,6);
//      cout<<array[secondlargest]<<endl;
    
    

//     return 0;
// }



// find duplicates in  array;

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int>v(9);
//     for(int i=0;i<v.size();i++){
//         cin>>v[i];
//     }
//     int ans =0;
//     for(int i=0; i<v.size();i++){
//         ans = ans^v[i];
//     }
//     for(int i=1;i<v.size();i++){
//         ans= ans^i;
//     }
//     cout<<"dupliccate element is : "<<ans<<endl;
//     return 0;
// }

//write a program to left 00 ND RIGHT 111;
/*
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
}*/



//write a progeam to print first and last occerence;


// #include<iostream>
// #include<vector>
// using namespace std;
// int findFirstoccerence(int v[],int n, int key){
//     int s=0,e=n-1;
//     int mid = (s+e)/2;
//     int ans=-1;
//     while(s<=e){
//         if(v[mid]==key){
//             ans=mid;
//             e=mid-1;
//         }
//         else if(key > v[mid]){
//             s=mid+1;
//         }
//         else if(key< v[mid]){
//             e=mid-1;
//         }
//         mid = (s+e)/2;
//     }
//     return ans;
// }
// int findlastoccerence(int v[],int n, int key){
//     int s=0,e=n-1;
//     int mid = (s+e)/2;
//     int ans=-1;
//     while(s<=e){
//         if(v[mid]==key){
//             ans=mid;
//             s=mid+1;
//         }
//         else if(key > v[mid]){
//             s=mid+1;
//         }
//         else if(key< v[mid]){
//             e=mid-1;
//         }
//         mid = (s+e)/2;
//     }
//     return ans;
// }

// int main(){
//     int v[8]={0,1,2,2,2,2,4,5};
//     cout<<"first occerence of 2 is  "<<findFirstoccerence(v,6,2)<<endl;
//     int i=findFirstoccerence(v,8,2);
//     int j=findlastoccerence(v,8,2);
//     cout<<"first occerence of 2 is  "<<findlastoccerence(v,6,2)<<endl;
//     cout<<"number of occerence of 2 : "<<(j-i)+1;
//     return 0;
// }


#include <iostream>
using namespace std;

double power(double x, int n) {
   if (n == 0) {
      return 1.0;
   }
   double result = power(x, n / 2);
   if (n % 2 == 0) {
      return result * result;
   } else {
      if (n > 0) {
         return x * result * result;
      } else {
         return (result * result) / x;
      }
   }
}

int main() {
   double x;
   int n;
   cout << "Enter the value of x: ";
   cin >> x;
   cout << "Enter the value of n: ";
   cin >> n;
   double result = power(x, n);
   cout << x << " raised to the power " << n << " is " << result << endl;
   return 0;
}



