//factorial of any number;


#include<iostream>
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
}