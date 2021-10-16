#include<stdio.h>
int main(){
    int numbers[10], sum = 0;
    double average;

    printf("Enter 10 numbers: \n");

    for(int i = 0; i<10; i++){
        scanf("%d", &numbers[i]);

        sum = sum + numbers[i];
        printf("%d \n",sum);
    }

    average = (double) sum/10;
    printf("The average is: %lf\n",average);

    return 0;
}
