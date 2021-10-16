#include<stdio.h>
int main(){
    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    if(year%4 == 0){
        printf("%d is a leap year",year);
    }
    else{
        printf("The entered year is not a leap year");
    }

return 0;
}
