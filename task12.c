#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Користувач записує певний текст. Вивести кількість символів в тексті (Скільки разів кожен символ зустрічається в тексті). Вивести символ(и) якій найчастіше з'являється.

    void txt(char str1[])
    {
      int sum = 0;
      int symbol1[256] = {0};

        for (int i = 0; str1[i] != '\0' && str1[i] != '\n';  i++)
            {
               unsigned char symbol = (unsigned char)str1[i];
               symbol1[symbol]++;
            } 
 
       

    for (int i = 0; i < 256; i++)
    {
        for (int i = 0; i < 256; i++)
{
    if (symbol1[i] > sum)
        sum = symbol1[i];
} 
    }
    

    printf("Найчастіші символи:\n");

    for (int i = 0; i < 256; i++)
    {
        if (symbol1[i] == sum)
        {
            if (i == ' ')
                printf("[пробіл]\n");
            else
                printf("'%c'\n", i);
 

    }
    }
    } 
//Через один войд знайти кількість символів та записати кількість кожного симовлу в інший масив  
//Чнрнз другий масив вивести симв який найчастішк зустрічається  for j  -> if [j] > [j +1] -> max = [j] 
 

        int main(){      
 
        char arr[50] = {0};
        
        printf("Print your txt");
        
         if (fgets(arr, sizeof(arr), stdin) == NULL)
         return 1;

        txt(arr);


        



return 0;
}
