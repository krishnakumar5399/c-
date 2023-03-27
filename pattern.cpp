//********
//********
//********




// #include<iostream>
// using namespace std;
// int main()
// {
//     for (int i=1 ; i<=3 ;i++){
//         for (int j=1; j<=8 ;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }



// *********
// *       *
// *       *
// *       *
// *********


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     for(int i=1; i<=n;i++){
//         for(int j=1; j<=m; j++){
//             if( i==1 || j==1 || i==n || j==m){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }cout<<endl;
//     }
// }



// *
// **
// ***
// ****
// *****


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n ; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"*";
//         }cout<<endl;
//     }

//     return 0;

// }


// *****
// ****
// ***
// **
// *



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int i=1 ; i<=n ; i++){
//         for( int j=1;j<=n-i+1 ;j++){
//             cout<<"*";
//         }cout<<endl;
//     }
//     return 0;
// }


//       *
//      ***
//     *****
//    *******
//   *********
//  ***********



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int i=1 ; i<=n; i++){
//         for(int j=1 ; j<=(n-i+1);j++){
//             cout<<" ";
//         }
//         for(int j=1 ; j<=(2*i-1);j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// 1234567
// 2345671
// 3456712
// 4567123
// 5671234
// 6712345
// 7123456





// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for (int j=i;j<=n; j++){
//             cout<<j;
//         }
//         for(int j=1;j<=(i-1);j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }return 0;
// }



// 5
// 1
// 12
// 123
// 1234
// 12345




// #include<iostream>
// using namespace std;
// int main() 
// {
//     int n;
//     cin>>n;
//     for (int i=1; i<=n; i++){
//         for (int j=1; j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }

     
     
// return 0;
// }


// 5
// 12345
// 1234
// 123
// 12
// 1


// #include<iostream>
// using namespace std;
// int main() 
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1;j<=(n-i+1);j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
     
     
// return 0;
// }


// 6
// 123456
// 1    6
// 1    6
// 1    6
// 1    6
// 123456



// #include<iostream>
// using namespace std;
// int main() 
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(i==1||j==1||i==n||j==n){
//                 cout<<j;
//             }else{
//                 cout<<" ";
//             }
//         }cout<<endl;
//     }
     
     
// return 0;
// }


// 121212
// 212121
// 121212
// 212121


// #include<iostream>
// using namespace std;
// int main() 
// {
//     int n,m;
//     cin>>n>>m;
//     for(int i=1; i<=n; i++){
//         for( int j=1;j<=m;j++){
//             if((i+j)%2==0){
//                 cout<<"1";
//             }else{
//                 cout<<"2";
//             }
//         }
//         cout<<endl;
//     }
     
     
// return 0;
// }

//     1
//     123
//    12345
//   1234567
//  123456789


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int i=1 ; i<=n; i++){
//         for(int j=1 ; j<=(n-i+1);j++){
//             cout<<" ";
//         }
//         for(int j=1 ; j<=(2*i-1);j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// *******
// *     *
// *     *
// *     *
// *     *
// *******

// #include<iostream>
// using namespace std;
// int main() 
// {
//     int n;
//     cin>>n;
//     for
     
// return 0;
// }
 /*  *
     *
     *
//*******
     * 
     * 
     * */


// #include<iostream>
// using namespace std;
// int main() 
// {
//     int m;
//     cin>>m;
//     for(int i=1; i<=m; i++){
//         for(int j=1 ; j<=m; j++){
//             if ( i==3 || j==3){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         } cout<<endl;
//     }
     
     
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main() 
// {
//      int n;
//      cin>>n;
//      for(int i=1;i<=n;i++){
//           for(int j=1;j<=n;j++){
//                if(i==1 || j==1 || i==n || j==n ){
//                     cout<<"*";
//                }
//                else{
//                     cout<<' ';
//                }
//           }cout<<endl;
          
//      }
     
     
// return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int i=1 ; i<=n; i++){
//         for(int j=1 ; j<=(n-i+1);j++){
//             cout<<"*";
//         }
//         for(int j=1 ; j<=(2*i-1);j++){
//             cout<<" ";
//             for(int i=1;i<)
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int i=1 ; i<=n ; i++){
//         for( int j=1;j<=n-i+1 ;j++){
//             cout<<"*";
//         }cout<<endl;
//     }
//     return 0;
// }
