// #include<iostream>
// using namespace std;
// int squre(int x){
//     return x*x;
// }
// int main() 
// {
//     int n;
//     cin>>n;
//     int even =2;
//     for(int i=1; i<=n; i++){
//         if(even%2==0){
//             cout<<squre(even)<<" ";    /*4 16 36 64 100 144 196 256 324 */
//         }even=even+2;
//     }
     
     
// return 0;
// }



// write a function to calculate area and circumference or a circle;

// #include<iostream>
// using namespace std;
// int squre(int x){
//     return x*x;
// }
// double area(int r){
//     return 3.14*squre(r);
// }
// double circumference(int r){
//     return 2*3.14*r;
// }
// int main() 
// {
//     int r=7;
//     cout<<area(r)<<"  "<<circumference(r);      //153.86  43.96
     
     
// return 0;
// }



// given the age of a persion ,write a function to cheack fersion is elesible for vote or not;


// #include<iostream>
// using namespace std;
// bool cheackelegible(int age,int limit){
//     if(age>=limit){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main() 
// {
//     int age;
//     cin>>age;
//     int vote_limit =18;
//     int is_elesible_to_vote = cheackelegible(age, vote_limit);
//     if(is_elesible_to_vote){
//         cout<<"yes this persion is elesible for voting";
//     }
//     else{
//         cout<<"the persion is not elesible for vote";
//     }
     
     
// return 0;
// }


//using function print the odd number between lying 1to 10;


// #include<iostream>
// using namespace std;
// bool isodd( int num){
//     if (num%2==0){
//         //num is even
//         return false;     
//     }
//     else {
//         //num is odd
//         return true;
//     }
// }
// int main() 
// {
//     int a=1, b=10;
//     for(int i=a; i<=b; i++){
//         if(isodd(i)){
//             cout<<i<<' ';     ///1 3 5 7 9
//         }
        
        
        
//     }
     
     
// return 0;
// }



// print the prime number lising between 2to 21; using function;
#include<iostream>
using namespace std;
bool isprime(int num){
    //function whose cheack the given number is prime or not;
    for (int i=2; i<=(num-1); i++){
        if(num%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}
bool isprimebtr(int num){
    for(int i=2; i*i<=num;i++){
        if(num%i==0){
            return false;
        }else{
            return true;
        }
    }
}
int main() 
{
    int a,b;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
     
     
return 0;
}