#include<stdio.h>

int binarySearch(int arr[],int size,int element){
    int low,mid,high;
    low = 0;
    high = size - 1;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        else if(arr[mid]<element){
            low = mid+1;
        }
        else{
            // (arr[mid]>element)
            high = mid-1;
        }
    }
    return -1;
}


int main(){

    // Array should be sorted for binary Search

    int arr[] = {1,4,5,7,9,13,15,19,20,26,28,35};
    int size = sizeof(arr)/sizeof(int);
    int element;

    printf("Select element between 1 to 35 for searching: ");
    scanf("%d",&element);

    int searchIndex = binarySearch(arr,size,element);

    printf("Element %d found in index %d \n",element,searchIndex);


    return 0;
}