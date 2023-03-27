/*#include<iostream>
using namespace std;
int main() 
{
    char name[21];
    cout<<"enter the name"<<endl;
    cin>>name;
    //name[2] = '\0';  // cout << kr  only two length print or break ho jayega 
    cout<<"name is "<<name;
     
     
return 0;
}*/

// find length or char array 

/*#include<iostream>
using namespace std;
int findLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main() 
{
    char name[21];
    cout<<"enter the name"<<endl;
    cin>>name;
    //name[2] = '\0';  // cout << kr  only two length print or break ho jayega 
    cout<<"name is "<<name<<endl;
    cout<<"length is "<< findLength(name);
     
     
     
     
return 0;
}*/

// reverese a string
/*#include<iostream>
using namespace std;
// void reverse(char name[], int n){
//     int s=0,e=n-1;
//     while(s<e){
//         swap(name[s++],name[e--]);
//     }
// }
bool checkPlendrome(char a[],int n){
    int s=0,e=n-1;
    while(s<e){
        if(a[s++]!=a[e--]){
            return 0;
        }
    }
    return 1;
}

int findLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverse(char name[], int n){
    int s=0,e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}


int main() 
{
    char name[21];
    cout<<"enter the name"<<endl;     //krishna
    cin>>name;
    int len=findLength(name);
    cout<<" the name is "<<name<<endl;
    cout<<"length of string is "<<len<<endl;   // 7
    reverse(name,len);
    cout<<"reverse string is ";
    cout<<name<<endl;                // anhsirk
    cout<<"check is pelindrome or not "<<checkPlendrome(name,len)<<endl;
    
     
     
  return 0;
}*/  


// find maximum occerence in the string

#include<iostream>
using namespace std;
char getMaxOccerence(string s){
    int arr[26]={0};
    // create array of count of characters 
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
        // lower case banane ke liye 
        number=ch-'a';
        arr[number]++;
    }
    // ton find max occerence character
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }

    return 'a'+ans;
}
int main(){
    string s;
    cin>>s;                               // test 
    cout<<getMaxOccerence(s);      //t 877

    return 0;
}