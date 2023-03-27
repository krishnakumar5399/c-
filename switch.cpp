#include<iostream>
using namespace std;
int main()
{
    int num1 ,num2 ;
    cout<<"ENTER TWO INTEGER :"<<endl;
    cin>>num1>>num2;
    char op; //(+ ,-, *,/)
    cout<<"ENTER OPERATOR (+,-,*,/):";
    cin>>op;
    switch (op)
    {

        case '+' : cout<<"SUM OF THE NUMBER IS"<<num1+num2<<endl;
        break;
         case '-' : cout<<"DIFFRENCE BETWEEN BITH NUMBER IS"<<num1-num2<<endl;
       break;
          case '*' : cout<<"MULTIPLICATION OF BOTH NUMBER IS"<<num1 * num2<<endl;
       break;
       case '/' : cout<<"DIVISION OF BOTH NUMBER IS "<<num1/num2;
        break;
        default : cout<<"ENTER THE VOILED OPERATOR";
        break;
    }

}