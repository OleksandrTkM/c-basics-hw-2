#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//Створіть калькулятор матриць. Цікавить саме операція додавання. Потрібно вивести матрицю 1, матрицю 2 та результат. 
      #define ROWS 5
      #define COLS 4

int sum;

    int main(){

     int arr[5][4] = {{6, 8, 2, 6}, {1, 4, 6, 3}, {6, 3, 6, 2}, {9, 5, 3, 7}, {8, 4, 2, 7}};
     
           for (int i = 0; i < ROWS; i++)
      {
          for (int j = 0; j < COLS; j++)
          {
              printf(" %d ", arr[i][j]);
              }
          printf("\n");   
       }
       
      printf("\n \n");
       
      int arr2[5][4] = {{7, 3, 2, 3}, {3, 5, 9, 2}, {7, 8, 2, 5}, {2, 7, 6, 3}, {23, 46, 23, 54}};
  
             for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                printf(" %d ", arr2[i][j]);
                }
          printf("\n");
        }
          
      printf("\n \n"); 
       
       int arrsum[5][4];
  
          for (int i = 0; i < ROWS; i++)
          {
              for (int j = 0; j < COLS; j++)
              {
                     sum = arr[i][j] + arr2[i][j];
                     printf(" %d ", sum);
              }
            printf("\n");
          }











return 0;
}
