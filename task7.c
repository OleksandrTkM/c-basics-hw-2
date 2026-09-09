#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

  void matrix(){

    int numbers[SIZE][SIZE];

    srand(time(NULL));

    for (int x = 0; x < SIZE; x++)
    {
        for (int y = 0; y < SIZE; y++)
        {
            numbers[x][y] = rand() % 10 + 1;
        }
    }
    

      for (int x = 0; x < SIZE; x++)
    {
        for (int y = 0; y < SIZE; y++)
        {
            printf("%3d", numbers[x][y]);
        }
        printf("\n");
    }
}

int main()
{
    srand(time(NULL));

    matrix();
       


return 0;
}
