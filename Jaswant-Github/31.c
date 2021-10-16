#include<stdio.h>
int main(){
    int numbers[5], sum = 0;

    printf("Enter the numbers to find sum of: ");

    for(int i=0; i<5; i++){
        scanf("%d",&numbers[i]);
        sum += numbers[i];
    }

    printf("The sum is: %d", sum);

    return 0;
}

