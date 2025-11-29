#include <stdio.h>

void display(int arr[],int size){
    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void deleteInPos(int arr[],int size,int index){

    // code for deletion in array
    for(int i = index;i<size-1;i++){
        arr[i] = arr[i+1];
    }
}

int main(){
    int arr[10] = {15,7,26,13,88};
    int size = 5;
    display(arr,size);
    int index = 1;
    deleteInPos(arr,size,index);
    size -=1;
    display(arr,size);

    return 0;
}