#include<stdio.h>

int main(){
    int n = 5; // Height of pyramid
    
    for(int i=0; i<n; i++){
        // Print spaces before X's to center the pyramid
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        // Print X's (2*i+1 gives 1, 3, 5, 7, 9... for each row)
        for(int j=0;j<2*i+1;j++){
            printf("*");
        }
       
        printf("\n");
    }
    return 0;
}