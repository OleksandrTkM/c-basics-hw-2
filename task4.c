#include <stdio.h>
     // size m*n
     // user symbol

    void s_matrix(int m, int n, char sym)
    {  
         for (int x = 0; x < m; x++)
         {
             for (int y = 0; y < n; y++)
             {
                 printf("%c", sym);
             }
           printf("\n");
         }    
    }
    
     int main(){
      
     int n, m; 
     char sym;
   
     printf("Put yours numbers and symbol");
     scanf("%d %d %c", &m, &n, &sym);

    if(m < 1 || n < 1){
     printf("this numbers is too low");
     return 0;
    }
   
   s_matrix(m, n, sym);




return 0;
}
