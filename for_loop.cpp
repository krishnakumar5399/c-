//PRINT FIRST N NATURAL NUMBER

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"ENTER THE NUMBER:";
//     cin>>num;
//     for(int i=1; i<num; i++){
//         cout<<i<<endl;
//     }
//     return 0;
// }


//PRINT FIRST N NUMBER WHOSE DIVISIBLE BY 2;

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"ENTER THE NUMBER:";
//     cin>>num;
//     for(int i = 2; i<=num ;i+= 2){
//         cout<<i<<endl;

//     }
//     return 0;
// }


//PRINT N NUMBER WHOSE NOT DIVISIBLE BY 2;

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int num;
//     cout<<"ENTER THE NUMBER:";
//     cin>>num;
//     for(int i=1 ; i<=num; i++){
//         if(i %2!=0){
//             cout<<i<<endl;
//         }
//     }

    
// }



//WRITE A PROGRAM TO PRINT FIRST N EVEN NUMBER  EXCEPT 10,20;30;
// #include<iostream>
// using namespace std;
// int main() 
// {
//     int n;
//     cin>>n;
//     for (int i=1; i<=n; i++){
//         if( i==5|| i==10 ||i==30){
//             continue;
//         }
//         cout<<i<<endl;
//     }
//     return 0;

// }


//WRITE A PROGRSM TO PRINT N EVEN NUMBER; except 10;20;30
// #include<iostream>
// using namespace std;
// int main() 
// {
//     int n;
//     cin>>n;
//     for (int i=1;i<=n; i++){
//         if(i%2==0){
//             if(i==10 || i==20){
//                 continue;
//             }cout<<i<<endl;
//         }
//     }
     
     
// return 0;
// }



//WRITE A PROGRAM TO REVERSE OF A NUMBER ; EX 54321==12345

// #include<iostream>
// using namespace std;
// int main() 
// {
//     int num;
//     cout<<"enter the number:";
//     cin>>num;
//     int reverse=0;
//     while(num>0){
//         int lastdighit = num%10;
//         reverse = reverse*10 +lastdighit;
//         num /=10;

//     }
//     cout<<reverse;
// return 0;
// }


// WRITE A PROGRAM TO PRINT FACTORIAL OF N NUMBER; 5!=5*4*3*2*1=120;

// #include<iostream>
// using namespace std;
// int main() 
// {
//     int n;
//     cin>>n;
//     int factorial =1;
//     for(int i=1; i<=n; i++){
//         factorial*=i;
        

//     }cout<<factorial<<endl;
     
// return 0;
// }



// //WRITE A PROGRAM TO SUM N EVEN NUMBER ;


// #include<iostream>
// using namespace std;
// int main(){
//     int count=0;
//     int i=2;
//     while(count<20){
//         if(i%2==0){
//             cout<<i<<" ";
//             count =count+1;
//         }
//         i=i+1;
//     }
     



//     return 0;
// }


//WRITE A PROGRAM TO SUM FIRST N EVEN NUMBER;

// #include<iostream>
// using namespace std;
// int main() 
// {
//     int n;
//     cin>>n;
//     int sum=0;
//     int i=2;
//     int count=0;
//     while(count<n){
//         if(i%2==0){
//             sum=sum+i;
//             count=count+1;
//         }
//         i=i+1;
//     }
//     cout<<sum;
     
     
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int sum=0;
//     int even= 2;
//     for(int i=1;i<=n; i++){
//         if(even%2==0){
//             sum=sum+even;
            
//         }
//         even =even+2;
//     }
//     cout<<sum;
//     return 0;
// }



//WRITE A PROGRAM TO PRINT FIRST N ODD NUMBER'


// #include<iostream>
// using namespace std;
// int main() 
// {
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
        
//         cout<<i<<" ";
//         i++;
        
//     }

     
     
// return 0;
// }

















