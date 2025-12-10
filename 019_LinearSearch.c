#include<stdio.h>

int linearSearch(int arr[],int size,int element){
    // Traversal every element
    for(int i = 0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int main(){

    // Unsorted array 
    int arr[]={12,233,21,324,5432,423,24,13,5,123,6756};
    int size = sizeof(arr)/sizeof(int);
    int element;

    printf("Enter the Searching Element: ");
    scanf("%d",&element);

    int searchIndex = linearSearch(arr, size, element);

    printf("The Element %d is found in index %d \n",element,searchIndex);

    return 0;
}