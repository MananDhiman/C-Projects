#include<stdio.h>

int main(){
    int n;
    printf("Enter no. of elements : ");
    scanf("%d",&n);

    int array[n];

    printf("Enter elements: ");
    for(int i = 0; i<=n-1; i++){
        scanf("%d", &array[i]);
    }

    printf("Elements in reversed order are: \n");
    for(int i = n-1; i>=0; i--){
        printf("%d\n", array[i]);
    }

    return 0;
}
