#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> f;

    int n;
    cout<<"Enter the size of the vector: ";
    cin>>n;

    for(int i=0;i<n;i++){
    cout<<"Enter the elements of the vector: ";
        int element;
        cin>>element;
        f.push_back(element);
    }

    cout<<"the elements inside vector are: "<<endl<<"{ ";
    for(int j=0;j<f.size();j++){
        cout<<f[j]<<" ";
    }
    cout<<"}"<<endl;
    return 0;

    
}