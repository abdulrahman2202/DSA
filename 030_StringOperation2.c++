#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

int main(){
    string str = "hello";

// Convert the string into uppercase
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<str<<endl;

    return 0;
}