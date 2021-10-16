#include<stdio.h>
int main(){

    for(int i = 1; i<=11;i++){
        printf("%d ",i);
        for(int j = 1; j<=5;j++){
            if(i%2==0){
                printf("\n");
            }

        }

    }

    return 0;
}
