#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

int main(){
    string str = "hello";

// Convert the string into uppercase
    cout<<"Convert the string into UpperCase: "<<endl;
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<str<<endl;

// Convert the string into lowercase
    cout<<"\nConvert the string into lowercase: "<<endl;
    transform(str.begin(),str.end(),str.begin(), ::tolower);
    cout<<str<<endl;

    return 0;
}