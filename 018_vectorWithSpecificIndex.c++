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

void addElementInStart(vector<int> &arr,int element){
    arr.insert(arr.begin(),element); // for adding in the vector from starting or specific location we use insert.
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

    printVector(arr);

    while(1){
        cout<<"Enter the Number what you want to do in this given Vector array : "<<endl;
        cout<<"1.Add number at the End"<<endl;
        cout<<"2.Add number at the Start"<<endl;
        cout<<"3.Add number at the specific location"<<endl;
        cout<<"4.Delete number at the End"<<endl;
        cout<<"5.Delete number at the Start"<<endl;
        cout<<"6.Delete number at the Specific location"<<endl;
        cout<<"7.End the Program "<<endl;

        int n,element,index;
        cout<<"Enter Your chooice: ";
        cin>>n;


        if((n==7)||(n>7)){
            cout<<"Thankyou for using this"<<endl;
            break;
        }
        // Additon part = 
        else if(n==1){
            cout<<"Enter the Element: ";
            cin>>element;
            arr.push_back(element);
            printVector(arr);

        }
        else if(n==2){
            cout<<"Enter the Element: ";
            cin>>element;
            addElementInStart(arr,element);
            printVector(arr);
        }
        else if(n==3){
            cout<<"Enter the Element: ";
            cin>>element;
            cout<<"Enter your specific position: ";
            cin>>index;
            SpecificLocation(arr,index,element);
            printVector(arr);

        }

        // deletion part = 
        else if(n==4){
            arr.pop_back();
            printVector(arr);
        }
        else if(n==5){
            arr.erase(arr.begin()); // for deleting in the vector from starting or specific location we use erase.
            printVector(arr);
        }
        else if(n==6){
            cout<<"Enter the index no. for deleting: ";
            cin>>index;
            if(index<0 || index>arr.size()){
                cout<<"invalid index no."<<endl;
            }else{
                arr.erase(arr.begin()+index);
                printVector(arr);
            }
        }

        
    }
}