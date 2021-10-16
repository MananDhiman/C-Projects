#include<stdio.h>
int main(){
    int numberOfTerms, term = 1, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &numberOfTerms);

    printf("%d\n",term);
    for(int i = 1; i<numberOfTerms;i++){
            term = term + 2;
            printf("%d\n", term);
            sum += term;
    }
    printf("The sum is: %d",sum+1);

    return 0;
}
