#include<stdio.h>
int main(){

    int a=1, b=1, c=0;

    for(int i = 3; i <=20; i++){
        printf("%d\n",c);
        a = b;
        b = c;
        c = a + b;

        if(c>100){
            break;
        }

    }

return 0;
}
