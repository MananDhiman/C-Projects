#include<stdio.h>
int main(){
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    if(number%2 == 0){
        printf("The entered number is an even number");
    }
    else{
        printf("The entered number is an odd number");
    }


return 0;
}
