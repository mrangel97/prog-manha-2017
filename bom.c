#include <stdio.h>
int main()
{
  float num;
  
  printf("\nQuantas horas são:");
  scanf("%f",&num);
  
  if((num>=0) && (num<=12))
  {
    printf("\nBom dia!!");
  }
  if((num>12) && (num<=18))
  {
    printf("\nBoa tarde!!");  
  }
  if((num>18) && (num<=24))
  {
    printf("\nBoa Noite!!");
  }
  return 0;
}