

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(9);
    for(int i=0; i<v.size(); i++){
        cin>>v[i];                        // 1 2 3 4 5 6 7 8 9

    }
    int evensum =0;   //  25
    int oddsum =0;     //30
    for(int i=0; i<=v.size();i++){
        if(v[i] % 2 ==0){
            evensum=evensum+ v[i];
        }
        else  {
            oddsum= oddsum +v[i];
        }
    }
    cout<<"diffrence between evensum and oddsum : "<<evensum-oddsum<<endl;     // -5
    return 0;
}
