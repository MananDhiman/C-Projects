#include<stdio.h>
int main(){
    int numberOfTerms, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d",&numberOfTerms);

    for(int i = 1; i <=numberOfTerms; i++){
            printf("%d\n", i);
            sum = sum + i;
    }
    printf("The sum is: %d\n",sum);


return 0;
}
