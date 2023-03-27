// check the array is shorted order or not



#include<iostream>
using namespace std;
int main()
{
    int array[9] = {1,2,83,4,5,6,7,8,9};
    cout<<array[5]<<endl;
    bool shortedflag = true;
    for(int i=1; i<9;i++){
        if(array[i] <= array[i-1]){
            shortedflag = false;
        }
    }
    cout<<shortedflag<<endl;
    return 0;
}



//