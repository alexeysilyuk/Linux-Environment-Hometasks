#include <stdio.h>
#include "helper.h"


int main(){
  float a,b,c;
  float d,root1,root2;  
 
 
  printf("Enter a, b and c of quadratic equation:");
  scanf("%f%f%f",&a,&b,&c);
   
  solveEquation(a,b,c);
 
  return 0;
}
