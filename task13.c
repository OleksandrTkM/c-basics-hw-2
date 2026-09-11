//Bubble sort: Користувач заповнює масив числами. Потрібно його відсортувати . Користувач має обрати сортування від меншого до більшого або навпаки

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

     void swap(int *num1, int *num2)
     {
        int a = *num1;
        *num1 = *num2;
        *num2 = a;
     }
      
     int b;
      int main(){

        int arr[10]={0};
           
          for (int i = 0; i < 10; i++)
               {
                   printf(" Set element %d : ", i + 1);
                   scanf(" %d", &arr[i]);
               }
              
           printf("print '1' if you want sort less to bigger, '2' if bigger to less");
           scanf("%d", &b);
 
        if (b = 1)
        { 
          for (int att = 0; att <9; att++)
               {

               for(int i = 0; i < 9; i++)
                   {
                       if(arr[i] > arr[i + 1])
                       swap(&arr[i], &arr[i + 1]);
                   }
               }
        }if (b = 2){ 
           for (int att = 0; att <9; att++)
               {

               for(int i = 0; i < 9; i++)
                   {
                       if(arr[i] < arr[i + 1])
                       swap(&arr[i], &arr[i + 1]);
                   }
               }
             }else{
              return 0;
                  }








           
          for (int i = 0; i < 10; i++)
               {
                    printf(" -%d- \n", arr[i]);
               }






return 0;
}
