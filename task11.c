#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Користувач записує певний текст. Потрібно видалити зайві пробіли залишивши по одному між словами. Рядок не має починатися або закінчуватися пробілом.
     

      void enter(char str1[]){
 
      int j = 0; 

        for (int i = 0; str1[i] != '\0' && str1[i] != '\n'; i++)
        {
        if (str1[i] == ' ')
        {
            if (j == 0 || str1[j - 1] == ' ')
                continue;
        }

        str1[j] = str1[i];
        j++;

       }
         if (j > 0 && str1[j - 1] == ' ')
            j--;

          str1[j] = '\0';
      }

      int main(){

     char str[100] = {0};

       printf("print your txt");

       if (fgets(str, sizeof(str), stdin) == NULL)
        return 1;

    enter(str);

    printf("result  \"%s\"\n", str);



return 0;
}
