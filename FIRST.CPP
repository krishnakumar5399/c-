// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"JAI MA SARSVATI JI";
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a , b;
//     cin>> a>>b;
//     cout<<a+b;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a , b ,c;
//     cout<<"enter the value of a \n";
//     cin>>a;
//     cout<<"enter the value of b \n";
//     cin>>b;
//     cout<<"enter the value of c \n";
//     cin>>c;
//     if(c==1){
//         cout<<a+b;
//     }else if(c==2){
//         cout<<a*b;
//     }else if(c==3){
//         cout<<a-b;
//     }else {
//         cout<<"not a voiked number";
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"ENTER THE NUMBER: ";
//     cin>> num;
//     switch(num){
//         case 1 : cout<<"mondey \n";
//         return 0;
//         case 2 : cout<<"tuesday \n";
//         return 0;
//         case 3 : cout<<"wedness day \n";
//         return 0;
//         case 4 : cout<<"thrusday \n";
//         return 0;
//         case 5 : cout<<"friday \n";
//         return 0;
//         case 6 :cout<<"saturday \n";
//         return 0;
//         case 7 :cout<<"sunday \n";
//         return 0;
//         default : cout<<"nOT A VOILED NUMBER ";
// return 0;
//     }
    
// }



// loop using c++ my first program to print n natural number ;


// #include<iostream>
// using namespace std;
// int main()
// { 
//     for ( int i =1; i<=23 ;i++){
//         cout<< i <<endl;
//     }
//     return 0;

// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int num1 ,num2;
//     cout<<"enter num1 :";
//     cin>>num1;
//     cout<<"entr num2 :";
//     cin>>num2;
//     cout<<num1+num2 <<endl;//15
//     cout<<num1-num2<<endl;//3
//     cout<<num1*num2<<endl;  //54
//     cout<<num1/num2<<endl;//1

//     return 0;

// }


/*write a program to check number is positive ,negative ya zero*/


/*#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a:";
    cin>>a;
    //cout<<"the value of a is:" <<a <<endl;//
    //a is positive 
    if (a>0){
        cout<<"a is positve";
    }
    else if(a<0) {
        cout<<" a is negative";
    }
    else{
        cout<<"a is  zero";
    }
    
}*/





/*wwrite a program to cheack person ia child  tinneger && old*/




// #include<iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cout<<"ENTER THE AGE:";
//     cin>> age;
//     if (age > 0 && age <=13){
//         cout<<"this is child"<<endl;
//     }
//     else if(age>13 && age<18){
//         cout<<"this persion is tinneger";

//     }
//     else if(age>=18 && age<40){
//         cout<<"thos persion is young";

//     }
//     else if(age >=40){
//         cout<<"this persion is old";
//     }
//     return 0;
// }




//if "a"--"z"=== lower case & "A"--"Z"=== upper case || 0---9 ===nomeric value




// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cin>>ch;
//     if('A'<=ch  && ch <='Z'){
//         cout<<"this is upercse;"<<endl;
//     }
//     else if('a'<=ch && ch<='z'){
//         cout<<"this is lowercase";
//     }
    
// }


//print 1 to 100 natural number 



// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"ENTER THE NUMBER:";
//     cin>>num;
//     for(int i = 3;i<=num; i+=3){
//         cout<<i<<endl;;
//     }
//     return 0;











// //increment or decrement function

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 5;
//     // cout<<a++<<endl;  //5
//     // cout<<a<<endl;       //6
//     // cout<<a--<<endl;     //6
//     // cout<<a<<endl;       ///5
   
//     cout<<++a<<endl;
//     cout<<--a<<endl;
//     cout<<a;


//     return 0;
// }





//chheack given alfabet is vowel or consonent;

// #include<iostream>
// using namespace std;
// int main()
// {
//     char alfabet;
//     cout<<"ENTER THE ALFABET:";
//     cin>>alfabet;
//     switch (alfabet)
//     {
//     case 'a': cout<<"IT IS VOWEL"<<endl;
//     break;
//     case 'e' : cout<<"IT IS VOWEL"<<endl;
//     break;
//     case 'i' : cout<< "IT IS VOWEL"<<endl;
//     break;
//     case 'o' : cout<<"IT IS VOWEL"<<endl ;
//     break;
//     case 'u' : cout<<"IT IS VOWEL"<<endl;
//     break;
//     default : cout<<"IT IS CONSONENT";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    // printing the upper half of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2*i-1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    // printing the lower half of the diamond
    for (int i = n-1; i >= 1; i--) {
        for (int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2*i-1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}




