#include <stdio.h>
#define COUNT 7

    int main(){
    int num;

    printf("Put your number: ");
    scanf("%d", &num);    
   
    for (int i = 0; i < COUNT; i++){
       printf("%d ", num + i);
    }
    

return 0;
}
