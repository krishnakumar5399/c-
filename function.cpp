// #include<iostream>
// using namespace std;
// int add(int num1 ,int num2){
//     int sum = num1+num2;
//     return sum;
// }
// int main()
// {
//     //int a=7;
//     //int b=9;
//     int a, b;
//     cin>>a>>b;
//     cout<<add(a,b)<<endl;
//     return 0;
// }



//MULTIPLE FUNCTION PASSES THROUGH FUNCTION;

// #include<iostream>
// using namespace std;
// int add(int n1, int n2){
//     int sum = n1+n2;
//     return sum;

// }
// int add(int n1, int n2 , int n3){
//     int sum = n1+n2+n3;
//     return sum ;
// }
// int multiplication (int n1, int n2){
//     int mul = n1*n2;
//     return mul ;
// }
// int main(){
//     int n1=3;
//     int n2=8;
//     int n3=9;
//     cout<<add(n2,n2)<<endl;         //16
//     cout<<add(n1,n2,n3)<<endl;              //20
//     cout<<multiplication(n1,n2)<<endl;     //24
//     cout<<multiplication(n1,n3)<<endl;    //27
//     return 0;


// }


/*
#include<iostream>
using namespace std;
int add(int n1 ,int n2,int n3){
    int sum=n1+n2+n3;
    return sum;
}

int main()
{
    int a=34;
    int b= 3;
    int c= 4;
    cout<<add(a,b,c);
    return 0;
}*/





#include<iostream>
using namespace std;
int add(int n1, int n2, int n3){
    int sum = n1+n2 +n3;
    return sum;
}


int main() 
{
    cout<<add(5,6,9); 
     
return 0;
}