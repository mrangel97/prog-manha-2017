#include <stdio.h>
int main()
{
  char letra;
  
  printf("\nDigite alguma coisa:");
  scanf("%c",&letra);
  
  if((letra>=65)&&(letra<=90))
  {
    printf("\nVoce digitou uma letra maiuscula!");
    printf("\nConvertida para minuscula=%c\n",letra+32);
  }
  else  if((letra>=97)&&(letra<=122))
  {
    printf("\nVoce digitou uma letra minuscula");
    printf("\nConvertida para maiuscula=%c\n",letra-32);
  }
  else if((letra>=48)&&(letra<=57))
  {
    printf("\nVoce digitou um numero");
  }         
  return 0;
}