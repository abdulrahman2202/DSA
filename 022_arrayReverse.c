#include<stdio.h>

int main(){
    int arr[] = {13,83,67,3,67,24};
    int n = sizeof(arr)/sizeof(int);
    int arr1[n];
    int j = 0;

    for(int i=n-1;i>=0;i--){
        arr1[j] = arr[i];
        j++;
    }
    for(int a = 0;a<n;a++){
        printf(" %d ",arr1[a]);
    }
    // printf(" \n %d",arr[5]);
    // printf(" \n %d",j);
    return 0;
}