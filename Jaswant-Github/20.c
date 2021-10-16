#include<stdio.h>

int main(){
    int first_number, second_number, third_number;

    printf("Enter three numbers: ");
    scanf("%d %d %d",&first_number, &second_number, &third_number);

    if(first_number>second_number && first_number>third_number){
        printf("%d is the greatest number ",first_number);
    }
    if(second_number>first_number && second_number>third_number){
        printf("%d is the greatest number ",second_number);
    }
    if(third_number>first_number && third_number>second_number){
        printf("%d is the greatest number ",third_number);
    }

return 0;
}
