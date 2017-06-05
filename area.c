#include <stdio.h>
#include <math.h>

int main()
{
  float base;
  float altura;
  float area;
  
  printf("\nEntre com o valor da base:");
  scanf("%f",&base);
  
  printf("\nEntre com o valor da altura:");
  scanf("%f",&altura);
  
  area =(base*altura)/2;
  
  printf("\nA area do triangulo eh=%f\n",area);
  
  return 0;
}