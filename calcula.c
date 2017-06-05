#include <stdio.h>
#include <math.h>

int main()
{
  int x;
  int y;
  int soma;
  int subtracao;
  int multiplicacao;
  float divisao;
  
  x=5;
  y=10;
  soma=x+y;
  subtracao=x-y;
  multiplicacao=x*y;
  divisao= (float) x/y;
  
  printf("\nResulatado da soma=%d\n",soma);
  printf("\nResultado da subtracao=%d\n",subtracao);
  printf("\nResultado da multiplicacao=%d\n",multiplicacao);
  printf("\nResultado da divisao=%f\n",divisao);
  
  return 0;
 
}  