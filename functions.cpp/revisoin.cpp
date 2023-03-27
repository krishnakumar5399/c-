// write a program to print natural number;

// #include<iostream>
// using namespace std;
// int main() 
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         cout<<i<<' ';      //1 2 3 4 5 6 7 8 9 
//     }
     
     
// return 0;
// }



//write a program to print even number;

// #include<iostream>
// using namespace std;
// int main() 
// {
//     int n; //9
//     cin>>n;
//     for (int i=2;i<=n; i++){
//         if(i%2==0){
//             cout<<i<<' ';    //2 4 6 8 
//         }
//     }
     
// return 0;
// }


//WRITE A PROGRAM TO PRINT FIRST N EVEN NUMBER;
// FIRST N;

/*#include<iostream>
using namespace std;
int main() 
{
    int n;   //9
    cin>>n;
    int count=2;
    for (int i=1;i<=n;i++){
        if(count%2==0){
            cout<<count<<' ';     //2 4 6 8 10 12 14 16 18 
            count+=2;
        }
    }
     
     
return 0;
}*/

//write a program to print n odd number;

/*
#include<iostream>
using namespace std;
int main() 
{
    int n;    //9
    cin>>n;
    int count =1;
    for(int i=1; i<=n; i++){
        if(count%2 !=0){
            cout<<count<<' ';     //1 3 5 7 9 11 13 15 17 
            count+=2;
        }
    }
     
     
return 0;
}*/


//WRITE A PROGRAM TO PRINT N PRIME NUMBER;

// #include<iostream>
// using namespace std;
// bool isprime(int num){
//     //function whose cheacj=k given number is prime or not;
//     for(int i=2; i<=(num-1); i++){
//         if(num%i==0){
//             //is  not prime
//             return false;
//         }
//         else{
//             return true;
//         }
//     }
// }
// int main() 
// {
//     int n;  //9
//     cin>>n;
//     for(int i=2; i<=n;i++){
//         if(isprime(i)){
//             cout<<i<<' ';   //2 3 5 7 9 
//         }
//     }
     
     
// return 0;
// }



// #include<iostream>
// using namespace std;
// int a=9;  //globsll variable  
// void fun(int a, int b){
//     cout<<a<<" "<<b;
// }
// int main()
// {
//     int a=8, b=5;       //local variable
//     fun(a,b);
//     return 0;
    
// }



//WRITE A PROGRAM TO PRINT N PRIME NUMBER;

// #include<iostream>
// using namespace std;
// bool isprime(int num){
//     //function whose cheacj=k given number is prime or not;
//     for(int i=2; i<=(num-1); i++){
//         if(num%i==0){
//             //is  not prime
//             return false;
//         }
//         else{
//             return true;
//         }
//     }
// }
// int main() 
// {
//     int n;  //9
//     cin>>n;
//     for(int i=2; i<=n;i++){
//         if(isprime(i)){
//             cout<<i<<' ';   //2 3 5 7 9 
//         }
//     }
     
     
// return 0;
//write s program to calculate power ;


/*#include<iostream>
using namespace std;

int power(int a,int b){
    int pow =1;
    for (int i=1; i<=b; i++){
        pow = pow*a;
    }
    return pow;
}
int main()
{
    int num1,num2;
    cin >>num1 >>num2;    //25, 2
    cout<<" power is :" <<power(num1,num2)<<endl;   //625
    return 0;
}*/

//factorial of any number;


/*#include<iostream>
using namespace std;

int factorial(int num){
    int fact =1;
    for (int i=1; i<=num ;i++){
        fact= fact*i;
    }
    return fact;
}
int main()
{
    int n;
    cin>>n;    //input 5
    cout<<" FACTORIAL OF THIAS NUMBER IS : " <<factorial(n)<<endl;     //then output is 120;
    return 0;
}*/


//print counting number

/*#include<iostream>
using namespace std;

void counting( int num){
    for(int i=1; i<=num; i++){
        cout<<i<<' ';
    }
}
int main()
{
    int n;
    cout<<"enter the number:"; 
    cin>>n;       // 9
    counting(n);         //1,2,3,4,5,6,7,8,9
    
}
*/

// #include<iostream>
// using namespace std;
// void febonic(int num){
//     int feb=0;
//     for (int i=0;i<=num; i++){
//         feb =feb+i;
//         cout<<feb<<" ";
    
//     }

// }
// int main()
// {
//     int n;
//     cin>>n;
//     febonic(n);
// }


// #include<iostream>
// using  namespace std;
// int factorial(int num){
//     int fact=1;
//     for(int i=1;i<=num;i++){
//         fact =fact*i;

//     }
//     return fact;

// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<"factorial is:  "<<factorial(n);
//     return 0;
    

// }


// #include<iostream>
// using namespace std;
// int power(int a, int b){
//     int pow =1;
//     for(int i=1; i<=b;i++){
//         pow = pow*a;
//     }
//     return pow;
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout<<"power is : "<<power(a,b);
//     return 0;
// }


// squre of first n natural number;

// #include<iostream>
// using namespace std;
// int squre(int n){
//     for (int i=0;i<=n;i++){
//         cout<< i*i<<' ';
    
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<squre(n);
//     return 0;
// }


//squre of first n even number

// #include<iostream>
// using namespace std;
// int squre(int n){
//     for(int i=2; i<=n;i++){
//         if(i%2 ==0){
//             cout<<i*i<<" ";            
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     squre(n);
//     return 0;
// }