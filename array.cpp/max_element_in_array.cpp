
//FIND THE MAXIMUM  VALUE  OUT OF THE ELEMENTS IN THE ARRAY;

#include<iostream>
using namespace std;
int main() 
{
    int array[] ={52,3,5,348,8};
    int size= sizeof(array)/sizeof(array[0]);
    int max= INT16_MIN;
    for(int indx =1;indx<size;indx++){
        if(array[indx]>max){
            max= array[indx];
        }
    }
    cout<<max;      ///34
     
     
return 0;
}
