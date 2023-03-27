// #include<iostream>
// #include<vector>
// using namespace std;
// int main() 
// {
//     vector<int>v ;
//     cout<<"size"<<v.size()<<endl;
//     cout<<"capacity"<<v.capacity()<<endl;
//     v.push_back(1);
//       cout<<"size"<<v.size()<<endl;
//     cout<<"capacity"<<v.capacity()<<endl;
//     v.push_back(5);
//       cout<<"size"<<v.size()<<endl;
//     cout<<"capacity"<<v.capacity()<<endl;
     
     
// return 0;
// }


//vector input from user;

#include<iostream>
#include<vector>
using namespace std;
int main() 
{
    vector<int>v;
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    for(int i=0; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.insert(v.begin()+2,6);   // this is ussed for add element 2nd index per 6 
    v.push_back(9);          //last me jor deta hai koi bhi element ko;

    v.erase(v.begin()-2);        // pahle se second elment ko hata dega;
    //using while loop;
    int indx=0;
    while(indx<v.size()){
        cout<<v[indx]<<' ';
        indx++;
    }
     
     
return 0;
}

