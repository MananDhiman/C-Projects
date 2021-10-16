#include<stdio.h>
int main(){
    int array[5];

    printf("Enter 5 numbers you wish to find greatest of: ");

    for(int i=0; i < 5; i++){
            scanf("%d",&array[i]);
    }

    for(int i = 0; i<5; i++){
        if(array[0]<array[i]){
                array[0] = array[i];
            }
    }

    printf("%d",array[0]);

    return 0;
}
