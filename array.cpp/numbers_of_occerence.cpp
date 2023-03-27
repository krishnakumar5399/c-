#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(6);
    for (int i=0;i<=v.size();i++){
        cin>>v[i];     // 1 3 2 1 4 1 4 1
    }

    cout<<"enter x: ";     //1
    int x;
    cin>>x;
    int occerence = 0;
    for(int i=0;i<=v.size();i++){
        if(v[i]==x){
            occerence++;
        }
    }
    cout<<"numbers of occurence is : "<<occerence<<endl;    // 4
    return 0;

}