#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define ROWS 4
#define COLS 4

// Знайдіть найбільший елемент у матриці. Виведіть його позицію (рядок-колонка) а також це числo

int max;
int ind_x;
int ind_y;

int main(){

     int arr[4][4] = {{5, 4, 6, 8},{6, 4, 5, 1},{6, 3, 8, 10},{2, 7, 12, 4}};

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf(" %d ", arr[i][j]);
            if(max < arr[i][j]){
             max = arr[i][j];
             ind_x = i;
             ind_y = j;
            }   
        }
      printf("\n");
    }

   printf("max number is : %d, hes had this coordinate: %d %d", max, ind_x, ind_y);
 





return 0;
}
