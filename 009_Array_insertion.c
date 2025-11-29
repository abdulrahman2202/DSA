#include <stdio.h>

void display(int arr[],int size){
    // code for array traversal
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int insertInPos(int arr[],int size,int capacity,int element,int index){
    // code for insertion in array
    if(size>=capacity){
        return -1;
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1] =arr[i];
    }
    arr[index] = element;
    return 1;
}

int main(){
    int arr[10] = {15,7,26,13,88};
    int size = 5;
    int element = 70 , index = 2;
    display(arr,size);

    insertInPos(arr,size,10,element,index);
    size +=1;
    display(arr,size);

    return 0;
}