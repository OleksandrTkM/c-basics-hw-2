#include <stdio.h>
     
     int main(){
         
     int min = 0;
     int max = 0;

         printf("Print two numbers");
         scanf(" %d %d", &max, &min);
          
        if (max < min){
          max = max + min;
          min = max - min;
          max = max - min;    
         }

        int first = 0;
        int second = 1;
 
       while(first <= max){
      
        if(first >= min){
       printf("-- %d-- ", first);
       }
       second = first + second;
       first = second - first;
       }

        




return 0;
} 
