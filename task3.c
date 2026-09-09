#include <stdio.h>
      
    void matrix(int n){
    int size = 2 * n - 1;
    
    for (int y = 0; y < size; y ++){
    for (int x = 0; x < size; x ++){
    
    int distance = y;

        if(x < distance){
        distance = x;
        }
        if( size - 1 - y < distance){
        distance = size - 1 - y;
        }
        if(size - 1 - x < distance){
        distance = size - 1 - x;
        }
      printf("%d", n - distance);
    }
     printf("\n");
    }

    }
    
    int main(void)
   {
     int n; 
     
     printf("Put your number: ");
     scanf("%d", &n);

    if(n <= 1){
    return 0;
    }
     
    matrix(n);

return 0;
}
