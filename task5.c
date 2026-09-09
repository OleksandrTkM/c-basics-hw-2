#include <stdio.h> 
 
     int main(){
    
     int min;
     int max;
     int detect;
 
     printf("Put your min and max");
     scanf("%d %d", &min, &max);
  
    if(min > max){
    detect = max;
    max = min;
    min = detect;
    }

    for (int i = min; i <= max; i++){
     printf("%d  ", i);
   }




return 0;
}
