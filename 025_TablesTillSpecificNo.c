#include <stdio.h>

int main(){
    int num;

    printf("Enter the number till you want to print table: ");
    scanf("%d",&num);

    if(num > 0){
        for(int i=1; i<=num;i++){
            for(int j=1;j<=10;j++){
                printf("%d X %d = %d \n",i,j,i*j);
            }
        }
    }

    return 0;
}