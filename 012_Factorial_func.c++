#include <iostream>
using namespace std;

long long factorial(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}


int main(){
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n)<<endl;

    return 0;
}