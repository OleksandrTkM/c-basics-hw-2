#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Пошук островів - матриця MxN складається 0 та 1
//Знайдіть кількість груп одиниць (островів) що стоять поруч по горизонталі та вертикалі
//виведіть кількість островів. 

  int main(){
  
  int sum = 0;

        int matrix[6][6] = {
        {0, 1, 0, 0, 0, 0},
        {0, 1, 0, 1, 1, 1},
        {0, 0, 1, 0, 0, 0},
        {1, 1, 0, 0, 0, 0},
        {0, 0, 1, 0, 1, 1},
        {0, 0, 1, 0, 0, 0}};

       
// if ([i] == 1 && ([i + 1][j] == 1 || [i] [j+1] == 1) 
// sum ++;
 
          for (int i = 0; i < 6; i ++)
          {
              for (int j = 0; j < 6; j++)
              {
                   if( i < 5 && j < 5)
                    {                   
                      if (matrix[i][j] == 1 && (matrix[i + 1][j] == 1 || matrix[i][j + 1] == 0))
                      {
                         sum++;
                      }
                    }

                   printf(" %d ", matrix[i][j]);
              }
            printf(" \n ");

          }

          printf("There a %d islands", sum);

return 0;
}  
