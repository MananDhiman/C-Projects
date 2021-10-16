#include <stdio.h>

int main(){

    int number,product;

    printf("Enter the number you wish to find table of: ");
    scanf("%d",&number);

    int i=0;
    while(i<=10){
        product = i*number;
        printf("%d X %d = %d\n",number,i,product);

        i++;
    }

    return 0;
}
