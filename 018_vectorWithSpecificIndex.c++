#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> arr){
    cout<<"the elements inside vector are: "<<endl<<"{ ";
    for(int j=0;j<arr.size();j++){
        cout<<arr[j]<<" ";
    }
    cout<<"}"<<endl;
}

int SpecificLocation(vector<int> &arr,int index,int element){
    if(index<0 || index > arr.size()){
        cout<<"invalid index"<<endl;
        return 0;
    }
    arr.insert(arr.begin()+index,element);
    return 1;
}

int main(){
    vector<int> arr = {10,20,30,40};

    while(1){
        cout<<"Enter the Number what you want to do in this given Vector array : "<<endl;
        cout<<"1.Add number at the End"<<endl;
        cout<<"2.Add number at the specific location"<<endl;
        cout<<"3.Delete number at the End"<<endl;
        cout<<"4.Delete number at the Start"<<endl;
        cout<<"5.End the Program "<<endl;

        int n,element,index;
        cout<<"Enter Your chooice: ";
        cin>>n;


        if((n==5)||(n>5)){
            cout<<"Thankyou for using this"<<endl;
            break;
        }
        else if(n==1){
            cout<<"Enter the Element: ";
            cin>>element;
            arr.push_back(element);
            printVector(arr);

        }
        else if(n==2){
            cout<<"Enter the Element: ";
            cin>>element;
            cout<<"Enter your specific position: ";
            cin>>index;
            SpecificLocation(arr,index,element);
            printVector(arr);

        }

        
    }
}