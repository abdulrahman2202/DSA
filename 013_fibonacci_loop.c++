#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter how many terms of the fibonacci series you want to print: ";
    cin>>n;

    int first = 0, second = 1, next;
    cout<<"Printing the "<<n<<" fibonacci series : "<<endl;
    for(int i = 0;i<n; i++){
        cout<<first<<",";
        next = first + second; // sum of the previous two terms
        first = second; // update the first term to the second term
        second = next; // update the second term to the next term
    }

    return 0;
}