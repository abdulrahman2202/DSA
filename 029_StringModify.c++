#include <iostream>
#include <string>
using namespace std;


int main(){
    string str = "Hello Abdul";

// Adding the character at the end
    cout<<"Adding the character at the end:- "<<endl;

    str.push_back('@');
    cout<<str<<endl;


    return 0;
}