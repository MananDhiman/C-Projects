#include <stdio.h>

int main (){
    int array[7], a;

   printf("Enter the seven elements: \n");

   for (int i = 0; i < 7; i++){
        scanf("%d", &array[i]);
   }

   for (int i = 0; i < 7; i++){
      for (int j = i + 1; j < 7; j++){
         if (array[i] < array[j]){
            a = array[i];
            array[i] = array[j];
            array[j] = a;
         }
      }
   }

   printf("The numbers in descending order are: \n");
   for (int i = 0; i < 7; i++){
      printf("%d    ", array[i]);
   }

   return 0;
}
