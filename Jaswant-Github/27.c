#include<stdio.h>
int main(){
    int number, max_cube;

    printf("Enter the number to find cube of: ");
    scanf("%d",&number);

    printf("Enter the max value: ");
    scanf("%d",&max_cube);

    do {
            printf("%d\n",number);
            number = number*number*number;
    } while(number<=max_cube);

    return 0;
}
