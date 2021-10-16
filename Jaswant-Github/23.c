#include<stdio.h>
int main(){

    int sum = 0;
    double average=0;

    printf("The first ten numbers are: \n");
    for(int i = 1; i<=10; i++){
        printf("                          %d\n",i);
        sum = sum+i;
    }

    average = (double) sum/10;
    printf("The sum of first ten numbers are: %d\n",sum);
    printf("The average of first ten numbers is: %lf\n",average);

return 0;
}
