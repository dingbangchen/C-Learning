#include <stdio.h>
int main(void){
  float length, width;
  
  printf("Enter the length of the rectangle:\n");
  while (scanf("%f", &length)== 1)
  {
    printf("Length = %0.2f:\n", length);
    printf("Enter the width:\n");
    if (scanf("%f", &width)!=1)
        break;
  

  }
}
