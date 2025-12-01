#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;
    long long factorial = 1; // long long is used to store large numbers

    for(int i = 1;i<=n;i++){
        factorial *=i;
    }

    cout<<"the factorial of "<<n<<" is "<<factorial<<endl;

    return 0;
}