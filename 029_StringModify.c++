#include <iostream>
#include <string>
using namespace std;


int main(){
    string str = "Hello Abdul";

cout<<endl;
    cout<<"Characters of a string can be added with .push_back(), removed with .pop_back(), or altered using .insert() and .erase().\nTime complexity for push/pop is O(1) and O(n) for insert/erase."<<endl;

cout<<endl;
// Adding the character at the end
    cout<<"Adding the character at the end:- "<<endl;

    str.push_back('@');
    cout<<str<<endl;
cout<<endl;
// Removing the character at the end
    cout<<"Removing the character at the end:- "<<endl;

    str.pop_back();
    cout<<str<<endl;
cout<<endl;


    return 0;
}