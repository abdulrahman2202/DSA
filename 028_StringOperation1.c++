#include <iostream>
#include <string>
using namespace std;

int main(){

// Finding the string length
    string str = "hello";
    // using length()
    cout<<"lenght of the str is : "<< str.length() <<endl;
    // using size()
    cout<<"size of the str is : "<< str.size() <<endl;

    

// concatenation of 2 or more string

    string str1 = "hello ";
    string str2 = "World";

    
    // concatenation using like this string result = str1+str2; {With " + " operator}
    string result1 = str1+str2;
    cout<<"Concatenation using + : "<<result1 <<endl;

    // Concatenation using append()
    string result2 = str1;
    cout<<"Concatenation using append() : "<<result2.append(str2)<<endl;


    return 0;
}